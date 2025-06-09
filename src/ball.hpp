#pragma once
#include <vector>

class Ball
{
public:
    Ball();
    void Update();
    void Reset();
    void Draw() const;
    float x;
    float y;
    int speedX;
    int speedY;
    int radius;

    private:
};