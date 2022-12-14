#ifndef GRAPHICSSCENE_H
#define GRAPHICSSCENE_H

#include "gameworld.h"
#include "protagonistview.h"
#include "scene.h"

class GraphicsScene : public Scene
{
public:
    GraphicsScene();
    QGraphicsScene *graphScene;
//    std::vector<std::unique_ptr<Tile>> tiles;


    int xpos;
    int ypos;
    int rangeAroundPro;

    int rows;
    int columns;

    void drawEnemy();
    void drawProtagonist();
    void drawTile();
    void drawHealthPack();
    void drawMovement();
    void drawDeathEnemy(Enemy en);
    int stepsize = 25;


public slots:
    void zoomIn();
    void zoomOut();

private:
    QGraphicsScene * scene;
    ProtagonistView *player_ptr;
    GameWorld *gameWord_ptr;
};

#endif // GRAPHICSSCENE_H
