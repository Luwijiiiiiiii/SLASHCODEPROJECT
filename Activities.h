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

    private:

    Rectangle textbutton;
    Vector2 vertex1;  // Top vertex
    Vector2 vertex2;  // Bottom-right vertex
    Vector2 vertex3;
    Rectangle runbutton;
    bool RunButton;
    bool button;
    bool button1;
    Rectangle box;
    Rectangle box2;
    Rectangle box3;
    Rectangle box4;

    //answer queastion1 actvity
    std:: string strAnswer;
    // answer question2 activty2
    std:: string strAnswer2;
    std:: string strAnswer3;
    // answeer q3 activity 3
    std:: string strAnswer4;
    std:: string strAnswer5;
    std:: string strAnswer6;
    std:: string strAnswer7;

    //next butto
    Rectangle nextbutton;
    bool NextButtonbool;

        
};