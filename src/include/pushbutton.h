// pushbutton.h

#ifndef PUSHBUTTON_H
#define PUSHBUTTON_H

#include <QApplication>
#include <QPushButton>
#include <QToolTip>

class PushButton : public QPushButton {
    Q_OBJECT

public:
    PushButton(QWidget *parent = nullptr);

protected:
    void enterEvent(QEnterEvent *event) override;
    void leaveEvent(QEvent *event) override;
};

#endif // PUSHBUTTON_H
