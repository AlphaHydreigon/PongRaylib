#include "ball.hpp"
#include "paddle.hpp"
#include <vector>
#include <raylib.h>

Paddle paddle1;
Ball::Ball() 
    : x(100)
    , y(100)
    ,speedX(5)
    ,speedY(5)
    ,radius(15)
{
}

void Ball::Update() 
{ 
}

void Ball::Reset()
{
    int speed_choices[2] = {-1, 1};
    x = GetScreenWidth()/2;
    y = GetScreenHeight()/2;
    speedX *= speed_choices[GetRandomValue(0, 1)];
    speedY *= speed_choices[GetRandomValue(0, 1)];
}

void Ball::Draw() const
{
    DrawCircle(x, y, radius, YELLOW);
}