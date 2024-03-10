#include "raylib.h"
#include <iostream>
#include <string>



class UserInput{

    public:
    // activity
    UserInput();
    void Input();
    void Input2();
    void Input3();
    void Input4();
    bool mouseOnText;
    std::string userInput;
    std::string displayText;
    std::string displayText2;
    std:: string displayText3;
    std:: string displayText4;
    std::string userInput3;
    int textWidth;
    bool type;
    Rectangle inputBox;
    std::string userInput2;
    bool type2;
    Rectangle inputBox2;
    Rectangle inputBox3;

    std::string userInput4;
    Rectangle inputBox4;
};