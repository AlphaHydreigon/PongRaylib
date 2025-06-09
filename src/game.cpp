#include "game.hpp"
#include "paddle.hpp"

Game::Game()
{
    InitGame();
}

Game::~Game()
{
}

void Game::Draw()
{
    paddle1.Draw();
   // paddle2.Draw();
    ball.Draw();
}

void Game::Update()
{

    if(run)
    {
        ball.x += ball.speedX;
        ball.y += ball.speedY;
        const int screenWidth = GetScreenWidth();
        const int screenHeight = GetScreenHeight();
        bool hitPaddle = CheckCollisionCircleRec({ball.x, ball.y}, ball.radius, {paddle1.position.x, paddle1.position.y, paddle1.width, paddle1.height});
        
        if ((ball.x + ball.radius >= screenWidth) || hitPaddle == true ) {
            ball.speedX *= -1;
        }
        
        if ((ball.y + ball.radius >= screenHeight) || (ball.y - ball.radius <= 0)) {
            ball.speedY *= -1;
        }
        if(ball.x - ball.radius <= 0){
            GameOver();
        } 
    } else {
        if(IsKeyDown(KEY_ENTER)){
            Reset();
            InitGame();
        }
    }
}

void Game::HandleInput()
{
    if(run)
    {
        if(IsKeyDown(KEY_W)){
            paddle1.MoveUp();
        } else if(IsKeyDown(KEY_S)){
            paddle1.MoveDown();
        }
    }
}

void Game::GameOver()
{
    run = false;
}

void Game::Reset()
{
    ball.Reset();
    paddle1.Reset();
}

void Game::InitGame()
{
    run = true;
}
