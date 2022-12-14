#include "protagonistview.h"



void ProtagonistView::place(int x, int y, int size)
{
    StepSize = size;
    setPixmap(QPixmap(":/images/mario03.png").scaled(StepSize,StepSize));
    xPos = x*StepSize;
    yPos = y*StepSize;
    setPos(xPos,yPos);
    setZValue(1);
    setFlag(QGraphicsItem::ItemIsFocusable);
    focusItem();
}

void ProtagonistView::defeated()
{
    setPixmap(QPixmap(":/images/deadGoomba.png").scaled(StepSize,StepSize));
    setPos(xPos,yPos);
}
