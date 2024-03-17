
#ifndef _SNAKE_H

#define _SNAKE_H
#include <graphics.h>
#include <conio.h>
#include "myPoint.h"

class snake{

public:
    snake();
    void drawSnake();
    void moveSnake();
    void keydown();

    int& getSnakeSize();
    myPoint getSnakePos(int pos);



protected:

    myPoint snakePos[100];
    int snakSize;
    char position;

    enum snakePosition{right,left,down,up};



};
#endif // _SNAKE_H

