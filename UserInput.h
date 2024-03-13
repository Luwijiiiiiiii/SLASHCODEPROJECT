#include "raylib.h"
#include <iostream>
#include <string>



class UserInput{

    public:
    // Constructor
    UserInput();
    //input function
    void Input();
    void Input2();
    void Input3();
    void Input4();
    void Input5();
 

    //conditions
    bool mouseOnText;
    int textWidth;
    bool type;
 

    //----ACTIVITY 1------
    std::string userInput;
    std::string displayText;
    Rectangle inputBox;

    //----ACTIVITY 2------
    std::string userInput2;
    std::string displayText2;
    Rectangle inputBox2;

    //-----ACTIVITY 3-------
    std:: string displayText3;
    std:: string displayText4;
    std::string userInput3;
    Rectangle inputBox3;
    std::string userInput4;
    Rectangle inputBox4;

    //-----ACTIVTY 4-----
    std::string userInput5;
    Rectangle inputBox5;
    std:: string displayText5;
    // SECOND INPUT ACT 4
    std::string userInput6;
    Rectangle inputBox6;
    std:: string displayText6;
    // THIRD INPUT ACT 4
    std::string userInput7;
    Rectangle inputBox7;
    std:: string displayText7;

    //----actvity 5--------
    std::string userInput8;
    Rectangle inputBox8;
    std:: string displayText8;
    std::string userInput9;
    Rectangle inputBox9;
    std:: string displayText9;

};