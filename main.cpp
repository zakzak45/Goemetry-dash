#include "raylib.h"

int main() {
    // This is just the initialisation
    const int screenWidth = 800;
    const int screenHeight = 450;

    InitWindow(screenWidth, screenHeight, "Geometry dash");

    SetTargetFPS(60); // the game will run on 60 frames per second

    // Main game loop
    while (!WindowShouldClose()) 
    {
       
        // Draw
        BeginDrawing();

        ClearBackground(RAYWHITE);


        EndDrawing();
    }

    
    CloseWindow(); // Close window and OpenGL context

    return 0;
}


