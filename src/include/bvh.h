// bvh.h

#ifndef BVH_H
#define BVH_H

#include <vector>

#include "bound3d.h"
#include "mesh.h"

struct CLBVHNode
{
    // Second Child Index for Interior Node
    // Triangle Index fot Leaf Node
    cl_int index;

    // -1 for Leaf Node
    cl_int splitAxis;

    char padding[8];

    CLBound3D bound;
};

struct BVHNode
{
    static BVHNode InitInterior(Bound3D bound, int secondChildIndex, int splitAxis);
    static BVHNode InitLeaf(Bound3D bound, int triangleIndex);

    CLBVHNode serialize();
    static BVHNode deserialize(CLBVHNode clNode);

    // Second Child Index for Interior Node
    // Triangle Index for Leaf Node
    int index;

    // -1 for Leaf Node
    int splitAxis;

    Bound3D bound;
};

class BVH
{
public:
    BVH();
    void build(Mesh &mesh);
    bool isBuilt() const;
    std::vector<CLBVHNode> getBVH() const;

private:
    struct TriangleInfo {
        TriangleInfo(int index, Bound3D bound, Vector3D centroid);
        int index;
        Bound3D bound;
        Vector3D centroid;
    };

    void recursiveBuild(std::vector<TriangleInfo> &triangleInfoList,
                        std::vector<CLTriangle> &triangleList,
                        int start,
                        int end);

    std::vector<CLBVHNode> bvhNodes;
    bool isBVHBuilt;
};

#endif // BVH_H
