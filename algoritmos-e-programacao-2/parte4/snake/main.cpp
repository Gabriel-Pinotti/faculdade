#include "raylib.h"
#include <iostream>
using namespace std;

#define UP 0 // Direcionamento com ints
#define DOWN 1
#define LEFT 2
#define RIGHT 3

#define SCREEN_WIDTH 1000 // Define o tamanho da janela
#define SCREEN_HEIGHT 800

#define SPEED 800 // Define a velocidade do círculo
#define RADIUS 10 // Define o tamanho do círculo

void colisao(Vector2 &pos){
        if (pos.x < RADIUS){ // colidiu na parede da esquerda
            pos.x = SCREEN_WIDTH-RADIUS;
        }
        if (pos.x > SCREEN_WIDTH-RADIUS){ // colidiu na parede da direita
            pos.x = RADIUS;
        }
        if (pos.y < RADIUS){ // colidiu na parede de cima
            pos.y = SCREEN_HEIGHT-RADIUS;
        }
        if (pos.y > SCREEN_HEIGHT-RADIUS){ // colidiu na parede de baixo
            pos.y = RADIUS;
        }
}

void movimentacao(int lastPos, Vector2 &pos, float &dt){
        switch (lastPos){ 
            case UP:
                pos.y-=SPEED * dt;
                break;

            case DOWN:
                pos.y+=SPEED * dt;
                break;

            case LEFT:
                pos.x-=SPEED * dt;
                break;

            case RIGHT:
                pos.x+=SPEED * dt;
                break;
        }
}

void pressionamento_teclas(int &lastPos){
    if (IsKeyDown(KEY_UP) || IsKeyDown(KEY_W)){
        lastPos = UP;
    }
    if (IsKeyDown(KEY_DOWN) || IsKeyDown(KEY_S)){
        lastPos = DOWN;
    }
    if (IsKeyDown(KEY_RIGHT) || IsKeyDown(KEY_D)){
        lastPos = RIGHT;
    }
    if (IsKeyDown(KEY_LEFT) || IsKeyDown(KEY_A)){
        lastPos = LEFT;
    }
}



int main() {
    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "Movimentação básica");
    SetTargetFPS(60); // Define FPS do programa
    Vector2 pos = {SCREEN_WIDTH/2.0f, SCREEN_HEIGHT/2.0f}; // Posição inicial
    int lastPos = RIGHT;


    while (!WindowShouldClose()) { // Roda isso enquanto estiver aberto
        float dt = GetFrameTime();
        
        movimentacao(lastPos, pos, dt); // Verifica lastPos (direcionamento) para mover o círculo
        colisao(pos); // Não deixa o círculo sair da tela, comparando seu tamanho à margem
        DrawCircleV(pos, RADIUS, BLUE); // DrawCircleV(onde, tamanho, cor);

        pressionamento_teclas(lastPos);


        BeginDrawing();
        ClearBackground(BLACK);
        DrawFPS(SCREEN_WIDTH - 90, 10); // Mostra o FPS na tela;
        EndDrawing();
    }

    CloseWindow();
    return 0;
}

