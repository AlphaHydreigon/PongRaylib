#pragma once
#include "C:\raylib\raylib\src\raylib.h"
#include <vector>

class Paddle{
    public:
    Paddle();
    ~Paddle();
    void Draw();
    void MoveUp();
    void MoveDown();
    void Reset();
    Vector2 position;
    int width;
    int height;
    

    private: 
    
};
