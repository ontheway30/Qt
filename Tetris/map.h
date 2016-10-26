#ifndef MAP_H
#define MAP_H

#include <QVector>
#include <QSet>
#include <QRectF>
#include <QPainterPath>
#include <QGraphicsScene>
#include <QGraphicsLineItem>
#include <QList>
#include <QPair>

#include "constants.h"
namespace Teris
{
class Teris;
class GameMap:public QGraphicsScene
{
public:
    GameMap();
    void deleteLine(QPair<qreal,qreal> minMax);
    void clearBlock(QList<QGraphicsItem*> block);
    void removeAll();
    void createNextTeris(int type);
    void drawBackground(QPainter *painter, const QRectF &rect);
protected:
    void init();
private:
    QList<QGraphicsLineItem*> _boundary;
    Teris* _nextTeris;
};
}
#endif // MAP_H
