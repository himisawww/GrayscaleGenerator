// bvh.cpp

#include <vector>
#include <algorithm>

#include "bvh.h"
#include "mesh.h"
#include "vector3d.h"
#include "bound3d.h"
#include "triangle.h"

BVH::BVH() {}

BVH::TriangleInfo::TriangleInfo(int index, Bound3D bound, Vector3D centroid):
    index(index),
    bound(bound),
    centroid(centroid) {}

BVHNode BVHNode::InitInterior(Bound3D bound,
                              int secondChildIndex,
                              int splitAxis) {
    BVHNode node = {
        .index = secondChildIndex,
        .splitAxis = splitAxis,
        .bound = bound
    };
    return node;
}

BVHNode BVHNode::InitLeaf(Bound3D bound,
                          int triangleIndex) {
    BVHNode node = {
        .index = triangleIndex,
        .splitAxis = -1,
        .bound = bound
    };
    return node;
}

CLBVHNode BVHNode::serialize() {
    CLBVHNode clNode = {
        .index = index,
        .splitAxis = splitAxis,
        .bound = bound.serialize()
    };
    return clNode;
}

BVHNode BVHNode::deserialize(CLBVHNode clNode) {
    BVHNode node = {
        .index = clNode.index,
        .splitAxis = clNode.splitAxis,
        .bound = Bound3D::deserialize(clNode.bound)
    };
    return node;
}

void BVH::build(Mesh &mesh) {
    std::vector<CLTriangle> triangles = mesh.getMesh();
    std::vector<TriangleInfo> triangleInfos;

    Bound3D sceneBound;
    triangleInfos.reserve(triangles.size());
    for (int i = 0; i < triangles.size(); i++) {
        sceneBound = sceneBound.Union(Triangle::deserialize(triangles[i]));
        triangleInfos.push_back(
            TriangleInfo(i,
                         Bound3D().Union(Triangle::deserialize(triangles[i])),
                         Triangle::deserialize(triangles[i]).centroid())
        );
    }

    bvhNodes.clear();
    bvhNodes.reserve(2 * triangles.size());
    recursiveBuild(triangleInfos, triangles, 0, static_cast<int>(triangles.size() - 1));
    isBVHBuilt = true;
}

void BVH::recursiveBuild(std::vector<TriangleInfo> &triangleInfoList,
                         std::vector<CLTriangle> &triangleList,
                         int start,
                         int end) {
    if (start == end) {
        TriangleInfo triInfo = triangleInfoList[start];
        Triangle tri = Triangle::deserialize(triangleList[triInfo.index]);
        Bound3D bound = Bound3D().Union(tri);
        bvhNodes.push_back(BVHNode::InitLeaf(bound, triInfo.index).serialize());
        return;
    }

    Bound3D totalBound;
    Bound3D centroidBound;
    for (int i = start; i <= end; i++) {
        TriangleInfo triInfo = triangleInfoList[i];
        totalBound = totalBound.Union(Triangle::deserialize(triangleList[triInfo.index]));
        centroidBound = centroidBound.Union(triInfo.centroid);
    }

    int splitAxis = centroidBound.MaxExtentDimension();
    int firstChildStart, firstChildEnd, secondChildStart, secondChildEnd;
    if (end - start == 1) {
        if (triangleInfoList[start].centroid[splitAxis] > triangleInfoList[end].centroid[splitAxis]) {
            std::swap(triangleInfoList[start], triangleInfoList[end]);
        }

        firstChildStart = start;
        firstChildEnd = start;
        secondChildStart = end;
        secondChildEnd = end;
    }
    else {
        int mid = (start + end) / 2;
        std::nth_element(&triangleInfoList[start],
                         &triangleInfoList[mid],
                         &triangleInfoList[end] + 1,
                         [splitAxis] (TriangleInfo &triInfo1, TriangleInfo &triInfo2) {
                             return triInfo1.centroid[splitAxis] < triInfo2.centroid[splitAxis];
                         });

        firstChildStart = start;
        firstChildEnd = mid;
        secondChildStart = mid + 1;
        secondChildEnd = end;
    }

    bvhNodes.push_back(BVHNode::InitInterior(totalBound, 0, splitAxis).serialize());
    auto& currentNode = bvhNodes.back();

    recursiveBuild(triangleInfoList, triangleList, firstChildStart, firstChildEnd);

    int secondChildOffset = static_cast<int>(bvhNodes.size());
    currentNode.index = secondChildOffset;

    recursiveBuild(triangleInfoList, triangleList, secondChildStart, secondChildEnd);
}

bool BVH::isBuilt() const {
    return isBVHBuilt;
}

std::vector<CLBVHNode> BVH::getBVH() const {
    return bvhNodes;
}
