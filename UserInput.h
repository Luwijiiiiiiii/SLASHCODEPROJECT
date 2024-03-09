#include "raylib.h"
#include <iostream>
#include <string>



class UserInput{

    public:
    UserInput();
    UserInput2();
    void Input();
    void Input2();
    std::string userInput;
    std::string displayText;
    std::string displayText2;
    int textWidth;
    bool type;
    Rectangle inputBox;
    std::string userInput2;
    bool type2;
    Rectangle inputBox1;
    ;
};