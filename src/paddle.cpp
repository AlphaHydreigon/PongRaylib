#include "paddle.hpp"

Paddle::Paddle()
{
    width = 13;
    height = 60;
    position.x = 10;
    position.y = GetScreenHeight()/2;
}

Paddle::~Paddle()
{
}

void Paddle::Draw()
{
    DrawRectangle(position.x, position.y, width, height, RED);
    DrawRectangle(GetScreenWidth() - position.x * 2, position.y, width, height, RED);
}

void Paddle::MoveUp()
{
    position.y -= 7;
    if(position.y <= 0){
        position.y = 0;
    }
}

void Paddle::MoveDown()
{
    position.y += 7;
    if(position.y >= GetScreenHeight())
    {
        position.y = GetScreenHeight() - height;
    }
}

void Paddle::Reset()
{
    position.y = GetScreenHeight()/2;
}
