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
    //activity 4
    box5 = {420, 560, 115, 40};
    box6 = {420, 610, 115, 40};
    box7 = {420, 670, 175, 40};
    button2 = false;
    //activity 5
    box8 = {410,640,60,40};
    box9 = {410,770,70,40};

    //runbutton
    runbutton = {1320,519,30,30};
    RunButton =false;
    //button style triangle p
    vertex1 = {1320 + 30, 534};    
    vertex2 = {1320 , 534 - 15};      
    vertex3 = {1320 , 534 + 15};
    //Nextbutton
    nextbutton = {420, 625, 120, 50};
    NextButtonbool = false;

}

//-it hundles the user input(can't direct put the fuction of the input)-----------------------------------------------------------------------
//act 1
void Activity::HandleInput(){ user_input.Input(); }

//activity 2
void Activity::HandleInput2(){ user_input.Input2(); }

// act 3
void Activity::HandleInput3(){ user_input.Input3(); }

// act 4
void Activity::HandleInput4(){ user_input.Input4(); }

// 5
void Activity::HandleInput5(){ user_input.Input5(); }





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
            HandleInput3();
        }
   
  

    }break;
// -----------------------4 ------------------------------------------------------------------------------------------------
    case (question4):
    {
        if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){

            if (CheckCollisionPointRec(GetMousePosition() , runbutton)) {
                RunButton = !RunButton;
            }

            if (CheckCollisionPointRec(GetMousePosition() , nextbutton)) {
                NextButtonbool = !NextButtonbool;

                if(NextButtonbool){
                    RunButton = !RunButton;
                    currQuestion = question5;

                }
            }  

        }
  
        if (CheckCollisionPointRec(GetMousePosition() , box5)) {
            button = !button;
            HandleInput4();
        }
        if (CheckCollisionPointRec(GetMousePosition() , box6)) {
            button1 = !button1;
            HandleInput4();
        }
        if (CheckCollisionPointRec(GetMousePosition() , box7)) {
            button2 = !button2;
            HandleInput4();
        }

    }break;

    case (question5):
    {
        if(IsMouseButtonPressed(MOUSE_BUTTON_LEFT)){

            if (CheckCollisionPointRec(GetMousePosition() , runbutton)) {
                RunButton = !RunButton;
            }

            if (CheckCollisionPointRec(GetMousePosition() , nextbutton)) {
                NextButtonbool = !NextButtonbool;

                if(NextButtonbool){
                    RunButton = !RunButton;
                    // currQuestion = question1;

                }
            }  

        }
  
        if (CheckCollisionPointRec(GetMousePosition() , box8)) {
            button = !button;
            HandleInput5();
        }
        if (CheckCollisionPointRec(GetMousePosition() , box9)) {
            button = !button;
            HandleInput5();
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

            if (user_input.userInput == strAnswer || user_input.userInput == strAnswer1){
                DrawRectangleRec(runbutton,RED);
                DrawRectangle(405,552,1040,512,(Color){1,63,15,255});
                DrawText("Correct!", 430, 570, 46, WHITE);
                DrawRectangleRounded(nextbutton, 0.1, 10, GREEN);
                DrawText("NEXT", 430, 635, 35, WHITE);

            } else{
                DrawRectangleRec(runbutton,RED);
                DrawRectangle(405,552,1040,512,(Color){128,5,5,255});
                DrawText("Incorrect!", 430, 570, 46, RED);
                DrawText("Try Again", 430, 635, 35, RED);
                
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

            if (user_input.userInput2 == strAnswer2 || user_input.userInput2 == strAnswer2a ||  user_input.userInput2 == strAnswer3 ){
                DrawRectangleRec(runbutton,RED);
                DrawRectangle(405,552,1040,512,(Color){1,63,15,255});
                DrawText("Correct!", 430, 570, 46, WHITE);
                DrawRectangleRounded(nextbutton, 0.1, 10, GREEN);
                DrawText("NEXT", 430, 635, 35, WHITE);

            } else{
                DrawRectangleRec(runbutton,RED);
                DrawRectangle(405,552,1040,512,(Color){128,5,5,255});
                DrawText("Incorrect!", 430, 570, 46, RED);
                DrawText("Try Again", 430, 635, 35, RED);
                
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

            if ((user_input.userInput3 == strAnswer4 || user_input.userInput3 == strAnswer6 ||
                user_input.userInput3 == strAnswer4a || user_input.userInput3 == strAnswer6a ) &&
                (user_input.userInput4 == strAnswer5 || user_input.userInput4 == strAnswer7)) {
                DrawRectangleRec(runbutton,RED);
                DrawRectangle(405,552,1040,512,(Color){1,63,15,255});
                DrawText("Correct!", 430, 570, 46, WHITE);
                DrawRectangleRounded(nextbutton, 0.1, 10, GREEN);
                DrawText("NEXT", 430, 635, 35, WHITE);

            } 
            else{
                DrawRectangleRec(runbutton,RED);
                DrawRectangle(405,552,1040,512,(Color){128,5,5,255});
                DrawText("Incorrect!", 430, 570, 46, RED);
                DrawText("Try Again", 430, 635, 35, RED);
                
            }
        } 
    break;  
    }
    case(question4):
    {
    
        lessons.DrawSlashcodeAct4();
        DrawTriangle(vertex1, vertex2, vertex3, GREEN);
        DrawRectangleRounded(box5, 0.1, 10, WHITE);
        DrawRectangleRounded(box6, 0.1, 10, WHITE);
        DrawRectangleRounded(box7, 0.1, 10, WHITE);

        if(!button);
            DrawRectangle(box5.x + 5 + MeasureText(user_input.displayText5.c_str(), 20), box5.y + 5, 2, 30, BLACK);
            DrawText(user_input.userInput5.c_str(), box5.x + 5, box5.y + 5, 20, BLACK);
        if(!button1);
            DrawRectangle(box6.x + 5 + MeasureText(user_input.displayText6.c_str(), 20), box6.y + 5, 2, 30, BLACK);
            DrawText(user_input.userInput6.c_str(), box6.x + 5, box6.y + 5, 20, BLACK);
        if(!button2);
            DrawRectangle(box7.x + 5 + MeasureText(user_input.displayText7.c_str(), 20), box7.y + 5, 2, 30, BLACK);
            DrawText(user_input.userInput7.c_str(), box7.x + 5, box7.y + 5, 20, BLACK);

        if (RunButton){
        if ((user_input.userInput5 == strAnswer8 || user_input.userInput5 == strAnswer9 ||
            user_input.userInput5 == strAnswer4a || user_input.userInput5 == strAnswer6a) &&
            (user_input.userInput6 == strAnswer10 || user_input.userInput6 == strAnswer11||
            user_input.userInput6 == strAnswer10a || user_input.userInput6 == strAnswer10b)&&
            (user_input.userInput7 == strAnswer12 || user_input.userInput7 == strAnswer13 || user_input.userInput7 == strAnswer14)) {
                DrawRectangleRec(runbutton,RED);
                DrawRectangle(405,552,1040,512,(Color){1,63,15,255});
                DrawText("Correct!", 430, 570, 46, WHITE);
                DrawRectangleRounded(nextbutton, 0.1, 10, GREEN);
                DrawText("NEXT", 430, 635, 35, WHITE);

            } 
            else{
                DrawRectangleRec(runbutton,RED);
                DrawRectangle(405,552,1040,512,(Color){128,5,5,255});
                DrawText("Incorrect!", 430, 570, 46, RED);
                DrawText("Try Again", 430, 635, 35, RED);
            }    
        }
        

    break;
    }
// ---------------------------5 ---------------------------------------------------------------
     case(question5):
    {
    
        lessons.DrawSlashcodeAct5();
        DrawTriangle(vertex1, vertex2, vertex3, GREEN);
        DrawRectangleRounded(box8, 0.1, 10, WHITE);
        DrawRectangleRounded(box9, 0.1, 10, WHITE);
        if(!button);
        DrawRectangle(box8.x + 5 + MeasureText(user_input.displayText8.c_str(), 20), box8.y + 5, 2, 30, BLACK);
        DrawText(user_input.userInput8.c_str(), box8.x + 5, box8.y + 5, 20, BLACK);

        if(!button);
        DrawRectangle(box9.x + 5 + MeasureText(user_input.displayText9.c_str(), 20), box9.y + 5, 2, 30, BLACK);
        DrawText(user_input.userInput9.c_str(), box9.x + 5, box9.y + 5, 20, BLACK);

        if(RunButton){

            if (user_input.userInput8 == strAnswer15 && user_input.userInput9 == strAnswer16){
                DrawRectangleRec(runbutton,RED);
                DrawRectangle(405,552,1040,512,(Color){1,63,15,255});
                DrawText("Correct!", 430, 570, 46, WHITE);
                DrawRectangleRounded(nextbutton, 0.1, 10, GREEN);
                DrawText("NEXT", 430, 635, 35, WHITE);

            } else{
                DrawRectangleRec(runbutton,RED);
                DrawRectangle(405,552,1040,512,(Color){128,5,5,255});
                DrawText("Incorrect!", 430, 570, 46, RED);
                DrawText("Try Again", 430, 635, 35, RED);
                
            }
        } 
       

    break;
    }
    

    default:
        break;
    }
   

 }
      