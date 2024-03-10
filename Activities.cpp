#include "Activities.h"
#include "UserInput.h"
#include "GameDesign.h"

UserInput user_input;
SettingsButton lessons;
QuestionState currQuestion = question1;


Activity::Activity(){
        //activity 1 print
    box  = {420, 560, 250, 40};
    button = false;
    // activity 2
    box2  = {420, 560, 175, 40};
    // activty3
    box3 = {420, 560, 115, 40};
    box4 = {420, 615, 175, 40};
    button1 = false;
    //runbutton
    runbutton = {980,519,30,30};
    RunButton =false;
    //button style triangle p
    vertex1 = {980 + 30, 534};    
    vertex2 = {980, 534 - 15};      
    vertex3 = {980, 534 + 15};
    //Nextbutton
    nextbutton = {1080, 610, 70, 40};
    NextButtonbool = false;

    //answer question1 activity
    strAnswer = "print(\"Hello World!\")";
    // answer question2 activity2
    strAnswer2 = "Car = \"Bugatti\"";
    strAnswer3 = "Car=\"Bugatti\"";
    // answer question3 activity
    strAnswer4 = "x = 10";
    strAnswer5 = "print(x)";
    strAnswer6 = "x=10";
    strAnswer7 = "print( x )";

    

    }
    //----------------------------------------------------------------------------------

void Activity::HandleInput(){
    user_input.Input();
}
//activity 2
void Activity::HandleInput2(){
    user_input.Input2();
}
void Activity::HandleInput3(){
    user_input.Input3();
}
void Activity::HandleInput4(){
    user_input.Input4();
}

void Activity::CheckAnswer() {


    switch (currQuestion)
    {
       
    case (question1):
    {
        if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){

            if (CheckCollisionPointRec(GetMousePosition() , runbutton)) {
                RunButton = !RunButton;
                
            }

            if (CheckCollisionPointRec(GetMousePosition() , nextbutton)) {
                NextButtonbool = !NextButtonbool;

                if(NextButtonbool){
                    RunButton = !RunButton;
                    currQuestion = question2;
                }
            }  

        }
  
        if (CheckCollisionPointRec(GetMousePosition() , box)) {
            button = !button;
            HandleInput();
        }
  

    }break;

    case (question2):
    {
        if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){

            if (CheckCollisionPointRec(GetMousePosition() , runbutton)) {
                RunButton = !RunButton;
                
                
                           
            }

            if (CheckCollisionPointRec(GetMousePosition() , nextbutton)) {
                NextButtonbool = !NextButtonbool;

                if(NextButtonbool){
                    RunButton = !RunButton;
                    currQuestion = question3;
                    
                    
                    
                }
            }  

        }
  
        if (CheckCollisionPointRec(GetMousePosition() , box2)) {
            button = !button;
            HandleInput2();
        }
   
  
// ------------------------activity 3----------------------------------------------------
    }break;
    case (question3):
    {
        if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){

            if (CheckCollisionPointRec(GetMousePosition() , runbutton)) {
                RunButton = !RunButton;
                           
            }

            if (CheckCollisionPointRec(GetMousePosition() , nextbutton)) {
                NextButtonbool = !NextButtonbool;

                if(NextButtonbool){
                    RunButton = !RunButton;
                    currQuestion = question4;
                    
                    
                    
                }
            }  

        }
  
        if (CheckCollisionPointRec(GetMousePosition() , box3)) {
            button = !button;
            HandleInput3();
        }
        if (CheckCollisionPointRec(GetMousePosition() , box4)) {
            button1 = !button1;
            HandleInput4();
        }
   
  

    }break;
    
    default:
        break;
    }       



}

 void Activity::DrawInputBox(){
    
    switch (currQuestion)
    {
    case (question1):
    {
        lessons.DrawSlashcodeAct1();
        DrawTriangle(vertex1, vertex2, vertex3, GREEN);
        
        DrawRectangleRounded(box, 0.1, 10, WHITE);
        // input 1 yeah
        if(!button);
        DrawRectangle(box.x + 5 + MeasureText(user_input.displayText.c_str(), 20), box.y + 5, 2, 30, BLACK);
        DrawText(user_input.userInput.c_str(), box.x + 5, box.y + 5, 20, BLACK);

        

        if(RunButton){

            if (user_input.userInput == strAnswer){
                DrawRectangleRec(runbutton,RED);
                DrawText("Correct!", 1080, 570, 30, GREEN);
                DrawRectangleRounded(nextbutton, 0.1, 10, GREEN);
                DrawText("Next", 1085, 615, 25, RED);

            } else{
                DrawRectangleRec(runbutton,RED);
                DrawText("Incorrect!", 1080, 570, 30, RED);
                DrawText("Try Again", 1080, 600, 25, RED);
                
            }
        } 





    break;
    }
    //---------------------------activity2--------------------------------------------------------------------------
    case(question2):
    {
        lessons.DrawSlashcodeAct2();
        DrawTriangle(vertex1, vertex2, vertex3, GREEN);
        DrawRectangleRounded(box2, 0.1, 10, WHITE);
       

        if(!button);
        DrawRectangle(box2.x + 5 + MeasureText(user_input.displayText2.c_str(), 20), box2.y + 5, 2, 30, BLACK);
        DrawText(user_input.userInput2.c_str(), box2.x + 5, box2.y + 5, 20, BLACK);

        if(RunButton){

            if (user_input.userInput2 == strAnswer2 || user_input.userInput2 == strAnswer3){
                DrawRectangleRec(runbutton,RED);
                DrawText("Correct!", 1080, 570, 30, GREEN);
                DrawRectangleRounded(nextbutton, 0.1, 10, GREEN);
                DrawText("Next", 1085, 615, 25, RED);

            } else{
                DrawRectangleRec(runbutton,RED);
                DrawText("Incorrect!", 1080, 570, 30, RED);
                DrawText("Try Again", 1080, 600, 25, RED);
                
            }
        } 
    break; 
    }


    //-------------activity 3 ____-----------------------------------------------------


    case(question3):
    {
        lessons.DrawSlashcodeAct3();
        DrawTriangle(vertex1, vertex2, vertex3, GREEN);
        DrawRectangleRounded(box3, 0.1, 10, WHITE);
        DrawRectangleRounded(box4, 0.1, 10, WHITE);

        if(!button);
            DrawRectangle(box3.x + 5 + MeasureText(user_input.displayText3.c_str(), 20), box3.y + 5, 2, 30, BLACK);
            DrawText(user_input.userInput3.c_str(), box3.x + 5, box3.y + 5, 20, BLACK);
        if(!button1);
            DrawRectangle(box4.x + 5 + MeasureText(user_input.displayText4.c_str(), 20), box4.y + 5, 2, 30, BLACK);
            DrawText(user_input.userInput4.c_str(), box4.x + 5, box4.y + 5, 20, BLACK);

        if(RunButton){

            if ((user_input.userInput3 == strAnswer4 || user_input.userInput3 == strAnswer6) &&
                (user_input.userInput4 == strAnswer5 || user_input.userInput4 == strAnswer7)) {
                DrawRectangleRec(runbutton,RED);
                DrawText("Correct!", 1080, 570, 30, GREEN);
                DrawRectangleRounded(nextbutton, 0.1, 10, GREEN);
                DrawText("Next", 1085, 615, 25, RED);

            } 
            else{
                DrawRectangleRec(runbutton,RED);
                DrawText("Incorrect!", 1080, 570, 30, RED);
                DrawText("Try Again", 1080, 600, 25, RED);
            }
        } 
    break;  
    }

    default:0
        break;
    }
   

 }
      