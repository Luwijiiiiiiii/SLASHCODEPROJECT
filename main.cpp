#include "raylib.h"
#include "Animation.h"
#include "UserInput.h"
#include "GameDesign.h"
#include "Activities.h"
#include <iostream>


using namespace std;

typedef enum GAMESCREEN {Logo = 0, Title, Menu, Gameplay,Game_language, slashcode, Ending} GAMESCREEN;


int main()
{
    // Initialization
    const int screenWidth = 1440;
    const int screenHeight = 1024;

    SettingsButton settingsButton;
    Activity activity;

    InitWindow(screenWidth, screenHeight, "Project: Slash Code (ALPHA)");
    SetTargetFPS(60);
    GAMESCREEN currentScreen = Logo;
    int framesCounter = 0;
    // Create an instance of AnimatedSprite
    AnimatedSprite mySprite("resources/bg/Main.png", 1440, 1024, 15, 0.2f);

    SetTargetFPS(60);
    

    // Main game loop
    while (!WindowShouldClose())
    {

        
        switch(currentScreen)
        {
            case Logo:
            {
                // TODO: Update LOGO screen variables here!

                framesCounter++;    // Count frames

                // Wait for 2 seconds (120 frames) before jumping to TITLE screen
                if (framesCounter > 120)
                {
                    currentScreen = Title;
                }
            } break;
            case Title:
            {
                // TODO: Update TITLE screen variables here!
                
                float deltaTime = GetFrameTime();
                mySprite.UpdatePro(deltaTime, 13);
                // Press enter to change to GAMEPLAY screen
                if (IsKeyPressed(KEY_ENTER) || IsGestureDetected(GESTURE_TAP))
                {
                    currentScreen = Gameplay;
                }
            } break;
            case Gameplay:
            {
                // TODO: Update GAMEPLAY screen variables here!

                // Press enter to change to ENDING screen

            Rectangle collision_position = { 344, 293, 764, 219 };
                
             if (CheckCollisionPointRec(GetMousePosition(), collision_position)) {
                 // isSettingOpen1 prevent the Beginner button to be press pag nasa setting mode
                if (settingsButton.isSettingsOpen1 && IsMouseButtonPressed(MOUSE_LEFT_BUTTON)) {          
                    currentScreen = Game_language;

                }
            } 

                settingsButton.Update();
               
            } break;


             case Game_language:
            {
                // TODO: Update GAME_language screen variables here!

                Rectangle collision_position = { 344, 293, 764, 219 };
                
                if (CheckCollisionPointRec(GetMousePosition(), collision_position)) {
                    
                    // isSettingOpen1 prevent the python button to be press pag nasa setting mode
                    if (settingsButton.isSettingsOpen1 && IsMouseButtonPressed(MOUSE_LEFT_BUTTON)) {
                        
                        currentScreen = slashcode;
                    }
                } 

                settingsButton.Update();
            } break;

        // SLASHCODE main feature
        //----------------------------------------------------------------------------------
            case slashcode:{

                if (IsKeyPressed(KEY_ESCAPE))
                {
                    currentScreen = Ending;
                } 
                activity.CheckAnswer();


            }break;           
  //----------------Slashcode function end------------------------------------------------------------------



            case Ending:
            {
                // TODO: Update ENDING screen variables here!

                // Press enter to return to TITLE screen
                if (IsKeyPressed(KEY_ENTER) || IsGestureDetected(GESTURE_TAP))
                {
                    currentScreen = Title;
                }
            } break;
            default: break;
        }
        //----------------------------------------------------------------------------------

        // Draw
        //----------------------------------------------------------------------------------
        BeginDrawing();

            ClearBackground(RAYWHITE);

            switch(currentScreen)
            {
                case Logo:
                {
                    // TODO: Draw LOGO screen here!
                    DrawText("LOGO SCREEN", 20, 20, 40, DARKBLUE);
                    DrawText("WAIT for 2 SECONDS...", 290, 220, 20, GRAY);

                } break;
                case Title:
                {
                    // TODO: Draw TITLE screen here!
                    mySprite.Draw();
                    

                } break;
                case Gameplay:
                {
                    // TODO: Draw GAMEPLAY screen here!
                    //background
                    DrawRectangle(0, 0, screenWidth, screenHeight,(Color){124,0,0,255});

                    settingsButton.Draw();
                    settingsButton.DrawSetting();

                } break;

                 case Game_language:
                {
                    // TODO: Draw GAMEPLAY screen here!

                    DrawRectangle(0, 0, screenWidth, screenHeight,(Color){124,0,0,255});
                    settingsButton.Drawlanguage();
                    settingsButton.DrawSetting(); 


            


                } break;

                case slashcode:{

                    settingsButton.DrawSlashcodeBase();
                    activity.DrawInputBox();

   
                        
                }break;

                case Ending:
                {
                    // TODO: Draw ENDING screen here!
                    DrawRectangle(0, 0, screenWidth, screenHeight, BLUE);
                    DrawText("ENDING SCREEN", 20, 20, 40, DARKBLUE);
                    DrawText("PRESS ENTER or TAP to RETURN to TITLE SCREEN", 120, 220, 20, DARKBLUE);

                } break;
                default: break;
            }
        EndDrawing();
    }

    // De-Initialization

    UnloadTexture(mySprite.spriteSheet);  // Unload texture
    CloseWindow();  // Close window and OpenGL context

    return 0;
}
