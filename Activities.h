#include "raylib.h"
#include <iostream>
#include <string>
#include "vector"
    typedef enum QuestionState { question1 = 0, question2, question3, question4 } QuestionState;

class Activity{
    public:

        Activity();
        void DrawInputBox();
        void CheckAnswer();

        // handle the question1 inputs 
        void HandleInput();
        void HandleInput2();
        void HandleInput3();
        void HandleInput4();
        void HandleInput5();
        void HandleInput6();
        void HandleInput7();

    private:

    Rectangle textbutton;
    Vector2 vertex1;  
    Vector2 vertex2;  
    Vector2 vertex3;
    Rectangle runbutton;
    bool RunButton;
    bool button;
    bool button1;
    bool button2;

    //next butto
    Rectangle nextbutton;
    bool NextButtonbool;

    //activity 1
    Rectangle box;
    std:: string strAnswer;

    // activity 2
    Rectangle box2;
    std:: string strAnswer2;
    std:: string strAnswer3;

     // activity 3
    Rectangle box3;
    Rectangle box4;
    std:: string strAnswer4;
    std:: string strAnswer5;
    std:: string strAnswer6;
    std:: string strAnswer7;

    //activity 4
    Rectangle box5;
    Rectangle box6;
    Rectangle box7;
    std:: string strAnswer8;
    std:: string strAnswer9;
    std:: string strAnswer10;
    std:: string strAnswer11;
    std:: string strAnswer12;
    std:: string strAnswer13;
    std:: string strAnswer14;
     

    
};