#include <raylib.h>
#include "ball.hpp"
#include "game.hpp"

int main() 
{
    
    constexpr int screenWidth = 800;
    constexpr int screenHeight = 600;
    
    Ball ball;
    
    InitWindow(screenWidth, screenHeight, "Pong");
    SetTargetFPS(60);

    Game game;
    
    while (!WindowShouldClose())
    {
        game.HandleInput();
        game.Update();
        BeginDrawing();
            ClearBackground(GRAY);
            game.Draw();
        EndDrawing();
    }
    
    CloseWindow();
}