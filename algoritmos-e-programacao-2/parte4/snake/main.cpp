#include "raylib.h"
#include <iostream>
using namespace std;

int main() {
  const int screenWidth = 800; // Define dimensões da janela
  const int screenHeight = 600;
  InitWindow(screenWidth, screenHeight, "Meu joguinho ;p");
  SetTargetFPS(60); // Define FPS do programa

  while (!WindowShouldClose()) { // Roda isso enquanto estiver aberto
    BeginDrawing();
    ClearBackground(PURPLE);
    DrawText("Que coisa loucura!", 20, 20, 20, BLACK);
    EndDrawing();
  }

  CloseWindow();
  return 0;
}