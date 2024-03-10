#include "UserInput.h"
#include "Activities.h"

UserInput::UserInput(){
    type = false;
    userInput = "";
    inputBox  = {420, 560, 250, 40};
    mouseOnText = false;
    //input2
    type2 = false;
    userInput2 = "";
    inputBox2  = {420, 560, 179, 40};
    //input3
    userInput3 = "";
    inputBox3 = {420, 560, 115, 40};
    //input4
    userInput4 = "";
    inputBox4 = {420, 615, 175, 40};
    
}




void UserInput::Input() {
    // make the shift not toggle
        if (CheckCollisionPointRec(GetMousePosition(), inputBox))mouseOnText = true;
        else mouseOnText = false;
        std::string displayText = (type ? "[Caps]" : "[Lower]") + userInput;

        if (mouseOnText)
        {
            int key = GetCharPressed();
            // Check if more characters have been pressed on the same frame
            while (key > 0)
            {
                // NOTE: Only allow keys in range [32..125]
                if ((key >= 32) && (key <= 125))
                {
                    userInput += (char)key;

                }

                key = GetCharPressed();  // Check next character in the queue
            }

            if (IsKeyPressed(KEY_BACKSPACE) && !userInput.empty()) {
                userInput.pop_back();
            }
  
            }
            int textWidth = MeasureText(displayText.c_str(), 20);
            while (textWidth > inputBox.width + 50) { // Assuming the white box has a width of 200
            userInput.pop_back();
            displayText = (type ? "[Caps]" : "[Lower]") + userInput;
            textWidth = MeasureText(displayText.c_str(), 20);
        }
    
}

//-----------------------------------------------------------------------------------------------
void UserInput::Input2() {
    // make the shift not toggle
        if (CheckCollisionPointRec(GetMousePosition(), inputBox2))mouseOnText = true;
        else mouseOnText = false;
        std::string displayText2 = (type ? "[Caps]" : "[Lower]") + userInput2;

        if (mouseOnText)
        {
            int key = GetCharPressed();
            // Check if more characters have been pressed on the same frame
            while (key > 0)
            {
                // NOTE: Only allow keys in range [32..125]
                if ((key >= 32) && (key <= 125))
                {
                    userInput2 += (char)key;

                }

                key = GetCharPressed();  // Check next character in the queue
            }

            if (IsKeyPressed(KEY_BACKSPACE) && !userInput2.empty()) {
                userInput2.pop_back();
            }
  
            }
            int textWidth2 = MeasureText(displayText2.c_str(), 20);
            while (textWidth2 > inputBox2.width + 50) { // Assuming the white box has a width of 200
            userInput2.pop_back();
            displayText2 = (type ? "[Caps]" : "[Lower]") + userInput2;
            textWidth2 = MeasureText(displayText2.c_str(), 20);
        }

}


//------------------------input 3-----------------------------------------------------------------------
void UserInput::Input3() {
 
    if (CheckCollisionPointRec(GetMousePosition(), inputBox3))mouseOnText = true;
    else mouseOnText = false;
    std::string displayText3 = (type ? "[Caps]" : "[Lower]") + userInput3;

        if (mouseOnText)
        {
            int key = GetCharPressed();
            // Check if more characters have been pressed on the same frame
            while (key > 0)
            {
                // NOTE: Only allow keys in range [32..125]
                if ((key >= 32) && (key <= 125))
                {
                    userInput3 += (char)key;

                }

                key = GetCharPressed(); 
            }

            if (IsKeyPressed(KEY_BACKSPACE) && !userInput3.empty()) {
                userInput3.pop_back();
            }
  
            }
            int textWidth3 = MeasureText(displayText3.c_str(), 20);
            while (textWidth3 > inputBox3.width + 50) { 
            userInput3.pop_back();
            displayText3 = (type ? "[Caps]" : "[Lower]") + userInput3;
            textWidth3 = MeasureText(displayText3.c_str(), 20);
    }
    
}

void UserInput::Input4() {
 
    if (CheckCollisionPointRec(GetMousePosition(), inputBox4))mouseOnText = true;
    else mouseOnText = false;
    std::string displayText4 = (type ? "[Caps]" : "[Lower]") + userInput4;

        if (mouseOnText)
        {
            int key = GetCharPressed();
            // Check if more characters have been pressed on the same frame
            while (key > 0)
            {
                // NOTE: Only allow keys in range [32..125]
                if ((key >= 32) && (key <= 125))
                {
                    userInput4 += (char)key;

                }

                key = GetCharPressed(); 
            }

            if (IsKeyPressed(KEY_BACKSPACE) && !userInput4.empty()) {
                userInput4.pop_back();
            }
  
            }
            int textWidth4 = MeasureText(displayText4.c_str(), 20);
            while (textWidth4 > inputBox4.width + 50) { 
            userInput4.pop_back();
            displayText4 = (type ? "[Caps]" : "[Lower]") + userInput4;
            textWidth4 = MeasureText(displayText4.c_str(), 20);
    }
    
}