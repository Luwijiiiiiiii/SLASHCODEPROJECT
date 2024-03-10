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
    box2  = {540, 560, 145, 40};
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

    }
    //----------------------------------------------------------------------------------

void Activity::HandleInput(){
    user_input.Input();
}
void Activity::HandleInput2(){
    user_input.Input2();
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
                    currQuestion = question2;
                }
            }  

        }
  
        if (CheckCollisionPointRec(GetMousePosition() , box)) {
            button = !button;
            HandleInput();
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

            } if (user_input.userInput != strAnswer ){
                DrawRectangleRec(runbutton,RED);
                DrawText("Incorrect!", 1080, 570, 30, RED);
                DrawText("Try Again", 1080, 600, 25, RED);
                
            }
        } 

        if(NextButtonbool){
            DrawRectangle(100,100,100,100,BLACK);
        }  



    break;
    }
    case(question2):
    {
        lessons.DrawSlashcodeAct2();
    }

    default:
        break;
    }
   

 }
      