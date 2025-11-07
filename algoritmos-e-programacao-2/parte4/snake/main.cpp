#include "raylib.h"
#include <iostream>
using namespace std;

#define UP 0
#define DOWN 1
#define LEFT 2
#define RIGHT 3



int main() {
    const int screenWidth = 800; // Define dimensões da janela
    const int screenHeight = 600;
    InitWindow(screenWidth, screenHeight, "Movimentação básica");
    SetTargetFPS(60); // Define FPS do programa


    Vector2 pos = {screenWidth/2.0f, screenHeight/2.0f};
    const float speed = 250.0f;
    const float radius = 15.0f;
    int lastPos = RIGHT;


    while (!WindowShouldClose()) { // Roda isso enquanto estiver aberto

        float dt = GetFrameTime();
        switch (lastPos){ // Verifica lastPos (direcionamento) para mover o círculo
            case UP:
                pos.y-=speed * dt;
                break;

            case DOWN:
                pos.y+=speed * dt;
                break;

            case LEFT:
                pos.x-=speed * dt;
                break;

            case RIGHT:
                pos.x+=speed * dt;
                break;
        }

        if (pos.x < radius){ // Não deixa o círculo sair da tela, comparando seu tamanho à margem
            pos.x = radius;
        }
        if (pos.x > screenWidth-radius){
            pos.x = screenWidth-radius;
        }
        if (pos.y < radius){
            pos.y = radius;
        }
        if (pos.y > screenHeight-radius){
            pos.y = screenHeight-radius;
        }

        DrawCircleV(pos, radius, BLUE); // DrawCircleV(onde, tamanho, cor);







        BeginDrawing();
        ClearBackground(BLACK);
        DrawFPS(screenWidth - 90, 10);
        EndDrawing();
    }

    CloseWindow();
    return 0;
}