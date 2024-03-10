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

    private:

    Rectangle textbutton;
    Vector2 vertex1;  // Top vertex
    Vector2 vertex2;  // Bottom-right vertex
    Vector2 vertex3;
    Rectangle runbutton;
    bool RunButton;
    bool button;
    Rectangle box;
    Rectangle box2;

    //answer queastion1 actvity
    std:: string strAnswer;
    std:: string strAnswer2;
    //next butto
    Rectangle nextbutton;
    bool NextButtonbool;

        
};