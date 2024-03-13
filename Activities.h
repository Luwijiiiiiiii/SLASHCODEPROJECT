#include "raylib.h"
#include <iostream>
#include <string>
#include "vector"
    typedef enum QuestionState { question1 = 0, question2, question3, question4 ,question5} QuestionState;

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
    std:: string strAnswer = "print(\"Hello World!\")";
    std:: string strAnswer1 = "print( \"Hello World!\" )";

    // activity 2
    Rectangle box2;
    std:: string strAnswer2 = "Car = \"Bugatti\"";
    std:: string strAnswer2a = "Car= \"Bugatti\"";
    std:: string strAnswer3 = "Car=\"Bugatti\"";

     // activity 3
    Rectangle box3;
    Rectangle box4;
    std:: string strAnswer4 = "x = 10";
    std:: string strAnswer4a = "x= 10";
    std:: string strAnswer5 = "print(x)";
    std:: string strAnswer6 = "x=10";;
    std:: string strAnswer6a = "x =10";;
    std:: string strAnswer7 = "print( x )";

    //activity 4
    Rectangle box5;
    Rectangle box6;
    Rectangle box7;
    std:: string strAnswer8 = "x = 10";;
    std:: string strAnswer9 = "x=10";;
    std:: string strAnswer10 = "y = 10";;
    std:: string strAnswer10a = "y= 10";;
    std:: string strAnswer10b = "y= 10";;
    std:: string strAnswer11 = "y=10";;
    std:: string strAnswer12 = "print(x+y)";;
    std:: string strAnswer13 = "print(x + y)";;
    std:: string strAnswer14 = "print( x + y )";;
    //activty 5
    Rectangle box8;
    std:: string strAnswer15 = "int";
     Rectangle box9;
    std:: string strAnswer16 = "float";

    
};