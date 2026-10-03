#include "raylib.h"
#include "particle.hpp"
#include "physicsObject.hpp"

int main()
{
    const int screenWidth = 800;
    const int screenHeight = 450;

    InitWindow(screenWidth, screenHeight, "teste");
    
    Camera3D camera = { 0 };
    camera.position = (Vector3){ 0.0f, 10.0f, 10.0f };  // Camera position
    camera.target = (Vector3){ 0.0f, 0.0f, 0.0f };      // Camera looking at point
    camera.up = (Vector3){ 0.0f, 1.0f, 0.0f };          // Camera up vector (rotation towards target)
    camera.fovy = 60.0f;                                // Camera field-of-view Y
    camera.projection = CAMERA_PERSPECTIVE;  

    Particle particle;
    std::cout << particle.getID() << "\n";
    SetTargetFPS(60);
    
    while (!WindowShouldClose()) {


        BeginDrawing();
        ClearBackground(BLACK);
        
        BeginMode3D(camera);
            //DrawCube((Vector3){0, 0, 0}, 2, 2, 2, RED);
            //DrawCubeWires((Vector3){0, 0, 0}, 2.0f, 2.0f, 2.0f, MAROON);
            //DrawSphere((Vector3){0, 0, 0}, 5, BLUE);
            //DrawSphereWires((Vector3){0, 0, 0}, 5, 10, 10, WHITE);
            particle.draw();
        EndMode3D();

        EndDrawing();
    }

    CloseWindow();
    return 0;
}
