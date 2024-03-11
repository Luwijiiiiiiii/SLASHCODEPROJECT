#include "GameDesign.h"
// constractor
SettingsButton::SettingsButton() {
    // initialize
    roundedRect = { (1440 - 1002) / 2, (1024 - 983) / 2, 1002, 983 };
    buttonRect1 = { 344, 293, 764, 219 };
    hover = false;

    settingsButton = { 20, 20, 30, 30 };
    // bool for the setting
    isSettingsOpen = false;

    // bool to prevent the beginner and python button pag nasa settings
    isSettingsOpen1 = true;

    //bool for temporary unavaillable features
    temporaryUnavailable = false;

    // initialize
    Xshape = { 35, 35, 30, 5 };
    Xshape1 = { 510, 242, 30, 5 };
    Xshape1_Collision = { 495, 230, 30, 30 };
    
    backcolor = { 10, 10, 330, 270};
    journey = { 480, 212, 500, 500};
    journeyButton = { settingsButton.x + 50, settingsButton.y + 50, 210, 55 };
    rankingButton = { journeyButton.x +0, journeyButton.y + 110, 210, 55 };
}





void SettingsButton::Update() {


    if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON)) {
        Vector2 mousePos = GetMousePosition();
        // gagawing true yung issettingbutton
        if (CheckCollisionPointRec(mousePos, settingsButton)) {
            isSettingsOpen = !isSettingsOpen;
            isSettingsOpen1 = !isSettingsOpen1;
        } else if (isSettingsOpen && CheckCollisionPointRec(mousePos, journeyButton)) {
            // Handle Journey button click
            temporaryUnavailable = !temporaryUnavailable;
            
        } else if (isSettingsOpen && CheckCollisionPointRec(mousePos, rankingButton)) {
            // Handle Ranking button click
            temporaryUnavailable = !temporaryUnavailable;
        }
        else if (temporaryUnavailable && CheckCollisionPointRec(mousePos, Xshape1_Collision)) {
            temporaryUnavailable = !temporaryUnavailable;
        }
        
    }
}



void SettingsButton::Draw() {

    //design
    if (CheckCollisionPointRec(GetMousePosition(), buttonRect1))hover = true;
    else hover = false;
    
    DrawRectangleRounded(roundedRect, 0.1, 10,(Color){10,18,42,255}  );
    DrawText("SLASHCODE", 509, 40, 70, (Color){218,221,216,255});
    DrawRectangle(300,120, 850 , 3 , (Color){218,221,216,255});
    DrawText("SELECT LEVEL", 559, 157, 40, (Color){218,221,216,255});
    DrawRectangleRounded(buttonRect1, 0.4 , 10, BLACK);
    DrawText("BEGINNER LEVEL!", 378 , 368, 76 , (Color){218,221,216,255});
    
    if(hover){
        DrawRectangleRoundedLines((Rectangle){344, 293, 764, 219 }, 0.4 , 10,2, RED);
    }

}
void SettingsButton::DrawSetting(){
    
    // draw depending what is the value of the isSettingOpen
    if(!isSettingsOpen){
        DrawRectangleRec(settingsButton, isSettingsOpen ? RED: BLACK);
        DrawText("-", settingsButton.x + 11, settingsButton.y + 1, 20, WHITE);
        DrawText("-", settingsButton.x + 11, settingsButton.y + 6, 20, WHITE);
        DrawText("-", settingsButton.x + 11, settingsButton.y + 11 , 20, WHITE);

    }
    // if Setting is true this will run
    if (isSettingsOpen) { 
        DrawRectangleRounded(backcolor, 0.1, 10, Fade(WHITE, 0.5f));
        DrawRectanglePro(Xshape, Vector2{ Xshape.width / 2, Xshape.height / 2 }, 45, BLACK);
        DrawRectanglePro(Xshape, Vector2{ Xshape.width / 2, Xshape.height / 2 }, -45, BLACK);
        DrawRectangleRec(journeyButton,Fade(WHITE,0.0f)); 
        DrawText("Journey", journeyButton.x + 10, journeyButton.y + 10, 44, BLACK);

        DrawRectangle(settingsButton.x,journeyButton.y+60 , 310,2,BLACK);

        DrawRectangleRec(rankingButton, Fade(WHITE,0.0f)); 
        DrawText("Ranking", rankingButton.x + 10, rankingButton.y + 10, 44, BLACK);
        DrawRectangle(settingsButton.x,rankingButton.y+60 , 310,2,BLACK);

        if(temporaryUnavailable){
            DrawRectangleRounded(journey, 0.1, 10 , WHITE);
            DrawText("This feature is", journey.x + 65, journey.y + 166, 32 , BLACK);
            DrawText("Temporary Unavailable", journey.x + 65, journey.y + 200, 32 , BLACK);
            DrawRectanglePro(Xshape1, Vector2{ Xshape.width / 2, Xshape.height / 2 }, 45, BLACK);
            DrawRectanglePro(Xshape1, Vector2{ Xshape.width / 2, Xshape.height / 2 }, -45, BLACK);
            DrawRectangleRec(Xshape1_Collision,Fade(BLACK,0.0f));    

        }
    }
}
void SettingsButton::Drawlanguage() {
    if(CheckCollisionPointRec(GetMousePosition(), buttonRect1))hover = true;
    else hover = false;

    //design
    DrawRectangleRounded(roundedRect, 0.1, 10,(Color){10,18,42,255}  );
    DrawText("SLASHCODE", 509, 40, 70, (Color){218,221,216,255});
    DrawRectangle(300,120, 850 , 3 , (Color){218,221,216,255});
    DrawText("SELECT LEVEL", 559, 157, 40, (Color){218,221,216,255});
    DrawRectangleRounded(buttonRect1, 0.4 , 10, BLACK);
    DrawText("PYTHON", 578 , 368, 76 , (Color){218,221,216,255});
        if(hover){
        DrawRectangleRoundedLines((Rectangle){344, 293, 764, 219 }, 0.4 , 10,2, RED);
    }
}







void SettingsButton::DrawSlashcodeAct1() {
    // loob nang activity 1 

    DrawText("In Python, the print function is used to output ", 10, 565, 16, WHITE);
    DrawText("information to the console or terminal. It allows ", 10, 590, 16, WHITE);   
    DrawText("you to display text, variables, or expressions. ", 10, 610, 16, WHITE); 
    DrawText("The basic syntax of the print function is:", 10, 635, 16, WHITE); 
    DrawRectangle(5, 675, 380, 40,WHITE ); 
    DrawText("print(\"This is an example of printing a text.\")", 10, 685, 16, BLACK); 
    DrawRectangle(5, 775, 380, 100,WHITE );
    DrawText("INSTRUCTION:", 10, 790, 16, BLACK);  
    DrawText("print Hello World!", 10, 830, 16, BLACK); 
    DrawText("Hover the mouse into the white box to input your code", 410, 665, 26, WHITE);
    }
void SettingsButton::DrawSlashcodeAct2() {

    // loob nang activity 2
    DrawText("Variables are containers for storing data values.", 10, 565, 16, WHITE);
    DrawText("when creating a variable Python has no command ", 10, 590, 16, WHITE);   
    DrawText("for declaring a variable. ", 10, 610, 16, WHITE); 
    DrawText("A variable is created the moment you first assign", 10, 640, 16, WHITE); 
    DrawText("a value to it. ", 10, 655, 16, WHITE); 
    DrawText("The basic syntax of the variable is:", 10, 689, 16, WHITE); 
    DrawRectangleRounded((Rectangle){5, 710, 300, 70}, 0.1, 10 ,WHITE ); 
    DrawText("x = 5", 15, 715, 16, BLACK); 
    DrawText("y = \"Car\"", 15, 745, 16, BLACK); 
    DrawRectangleRounded((Rectangle){5, 820, 330, 100}, 0.1, 10, WHITE );
    DrawText("INSTRUCTION:", 10, 825, 16, BLACK);  
    DrawText("create a variable named Car", 10, 855, 16, BLACK); 
    DrawText("and asign a value Bugatti to it", 10, 875, 16, BLACK); 
    }
void SettingsButton::DrawSlashcodeAct3() {

    // loob nang activity 3
    DrawText("Variables are containers for storing data values.", 10, 565, 16, WHITE);
    DrawText("when creating a variable Python has no command ", 10, 590, 16, WHITE);   
    DrawText("for declaring a variable. ", 10, 610, 16, WHITE); 
    DrawText("A variable is created the moment you first assign", 10, 640, 16, WHITE); 
    DrawText("a value to it. ", 10, 655, 16, WHITE); 
    DrawText("The basic syntax of the variable is:", 10, 689, 16, WHITE); 
    DrawRectangleRounded((Rectangle){5, 710, 300, 70}, 0.1, 10 ,WHITE ); 
    DrawText("<variable Name> = <Value>", 15, 715, 16, BLACK); 
    DrawText("print(<variable Name>)", 15, 745, 16, BLACK); 
    DrawRectangleRounded((Rectangle){5, 820, 330, 100}, 0.1, 10, WHITE );
    DrawText("INSTRUCTION:", 10, 825, 16, BLACK);  
    DrawText("Display the Value of 10", 10, 855, 16, BLACK); 
    DrawText("Using Variable x.", 10, 875, 16, BLACK); 
    }
void SettingsButton::DrawSlashcodeAct4() {

    // loob nang activity 2
    DrawText("PYTHON OPERATORS: Arithmetic Operators ", 10, 565, 16, WHITE); 
    DrawText("Arithmetic operators are used with numeric ", 10, 600, 16, WHITE); 
    DrawText("values to perform common mathematical operations: ", 10, 615, 16, WHITE); 
    DrawText("Operator   Name            Example", 10, 655, 16, WHITE); 
    DrawText("+          Addtion             x + y", 10, 680, 16, WHITE); 
    DrawText("-          Subtraction       x + y", 10, 700 , 16, WHITE); 
    DrawText("*          Multiplication      x + y", 10, 720 , 16, WHITE); 
    DrawText("/          Division            x + y", 10, 740 , 16, WHITE);

    DrawRectangleRounded((Rectangle){5, 760 + 20 , 280, 80}, 0.1, 10 ,WHITE ); 
    DrawText("<var1> = <value1>", 15, 780, 16, BLACK); 
    DrawText("<var2> = <value2>)", 15, 800, 16, BLACK); 
    DrawText("print(va1 + var2)", 15, 825, 16, BLACK); 
    DrawRectangleRounded((Rectangle){5, 870, 330, 80}, 0.1, 10, WHITE );
    DrawText("INSTRUCTION:", 10, 875, 16, BLACK);  
    DrawText("Display the sum of 10 + 10", 10, 895, 16, BLACK); 
    DrawText("Using Variables x and y.", 10, 915 , 16, BLACK); 
    }

 // base design nang Slashcode
    void SettingsButton :: DrawSlashcodeBase(){
        DrawRectangle(0, 0, 1440, 1024,WHITE);
        DrawRectangle(400, 512, 1440, 1024,(Color){59,59,59,255});
        DrawRectangle(0, 512, 400, 1024,(Color){24,24,24,255});
        DrawRectangle(0, 512, 1440, 40 ,BLACK);
        DrawRectangle(400, 512, 5,512,BLACK );
        DrawRectangle(0,512,190,38,(Color){24,24,24,255});
        DrawRectangle(405,512,190,38,(Color){59,59,59,255});
        DrawText("ACTIVITY",10 , 518, 30, WHITE);
        DrawText("Main.py",430 , 518, 30, WHITE);
       

    }

   

