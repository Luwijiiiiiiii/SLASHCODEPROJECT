#include "raylib.h"
#include <iostream>
#include <string>

class Activity{
    public:
        Activity();
        void Input();
        void DrawInputBox();
        void CheckAnswer();
        bool IsButtonPressed(Rectangle button);

    private:
        Rectangle inputBox;
        bool type;
        std::string displayText;
        int textWidth;
        std::string userInput;
        std::string strAnswer;
};