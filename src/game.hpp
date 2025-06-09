#pragma once
#include "ball.hpp"
#include "paddle.hpp"

class Game{
    public:
    Game();
    ~Game();
    void Draw();
    void Update();
    void HandleInput();
    bool run;

    private: 
    void GameOver();
    void Reset();
    void InitGame();
    Paddle paddle1;
   // Paddle paddle2;
    Ball ball;
};