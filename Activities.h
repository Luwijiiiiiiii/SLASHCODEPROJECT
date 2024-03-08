#include "raylib.h"
#include <iostream>
#include <string>

class Activity{
    public:
        Activity();
        void Input();
        void DrawInputBox();

    private:
        Rectangle inputBox;
        bool type;
        std::string displayText;
        int textWidth;
        std::string userInput;
};