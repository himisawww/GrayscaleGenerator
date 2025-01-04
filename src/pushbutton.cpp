// pushbutton.cpp

#include "pushbutton.h"

PushButton::PushButton(QWidget *parent)
    : QPushButton(parent) {
    setToolTip("Note: To ensure compatibility with KSP, set the" "\n"
               "Prime Meridian to 90° and enable X & Y Flip. " "\n"
               "These settings only affect the grayscale image," "\n"
               "geopotential is always aligned with the input" "\n"
               "model and is irrelevant to these settings.");
}

void PushButton::enterEvent(QEnterEvent *event) {
    if (isEnabled()) {
        QToolTip::showText(cursor().pos(), toolTip(), this);
        QPushButton::enterEvent(event);
    }
}

void PushButton::leaveEvent(QEvent *event) {
    QToolTip::hideText();
    QPushButton::leaveEvent(event);
}
