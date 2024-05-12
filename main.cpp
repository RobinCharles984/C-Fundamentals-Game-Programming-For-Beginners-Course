#include "raylib.h"

int main(){
    //Window Properties
    int height{600};
    int width{400};
    InitWindow(height, width, "Testing Scene");

    //Circle Properties
    int circle_x{175};
    int circle_y{100};

    //Game Loop
    SetTargetFPS(60);
    while(!WindowShouldClose()){
        BeginDrawing();
        ClearBackground(WHITE);
        
        //Game Logic
        DrawCircle(circle_x, circle_y, 25, GREEN);

        if(IsKeyDown(KEY_D))
            circle_x += 10;
        if(IsKeyDown(KEY_A))
            circle_x -= 10;
        if(IsKeyDown(KEY_W))
            circle_y -= 10;
        if(IsKeyDown(KEY_S))
            circle_y += 10;

        EndDrawing();
    }
}