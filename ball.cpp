#include "ball.h"

Ball::Ball(int right_wall, int top_wall)
{
    this->dx = 0;
    this->dy = 0;
    this->x = 0;
    this->y = 0;
    max_x = right_wall;
    max_y = top_wall;
}

void Ball::move()
{
    if (x == max_x || y == max_y)
    {
        turn();
    }
    else if (x == 0 || y == 0)
    {
        turn();
    }

    if (dx == -1) x--; //PLAY WITH ME
    else x++;
    if (dy == -1) y--; //PLAY WITH ME
    else y++;

}

void Ball::turn()
{
    if (x == max_x)
    {
        dx = -1;//Travels left
    }
    else if (x == 0)
    {
        dx = 1;//Travels right
    }

    if (y == max_y)
    {
        dy = -1;//Travels down
    }
    else if (y == 0)
    {
        dy = 1;//Travels up
    }
}

int Ball::get_x() const
{
    return x;
}

int Ball::get_y() const
{
    return y;
}
