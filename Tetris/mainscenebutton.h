#ifndef MAINSCENEBUTTON_H
#define MAINSCENEBUTTON_H

#include <QGraphicsItem>
#include <QGraphicsOpacityEffect>

namespace Teris
{
class Controller;
class MainSceneButton:public QGraphicsItem
{
public:
    MainSceneButton(QString caption,qreal width,qreal height,qreal x,qreal y,Controller* controller);
    void hoverEnterEvent(QGraphicsSceneHoverEvent *event);
    void hoverLeaveEvent(QGraphicsSceneHoverEvent *event);
    virtual void mousePressEvent(QGraphicsSceneMouseEvent *event) = 0;
    virtual void mouseReleaseEvent(QGraphicsSceneMouseEvent *event) = 0;
    QRectF boundingRect()const;
    virtual void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    QString getCaption()const;
    void setCaption(QString caption);
private:
    qreal _width;
    qreal _height;
    QString _caption;
    QGraphicsOpacityEffect* _opacity;
    Controller* _controller;
};
}
#endif // MAINSCENEBUTTON_H
