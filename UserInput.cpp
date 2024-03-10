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
    inputBox2  = {420, 560, 160, 40};
    
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
        if (CheckCollisionPointRec(GetMousePosition(), inputBox))mouseOnText = true;
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
    // make the shift not toggle
    if (IsKeyDown(KEY_LEFT_SHIFT) || IsKeyDown(KEY_RIGHT_SHIFT)) {
        type = true;
    } else {
        type = false;
    }

    std::string displayText3 = (type ? "[Caps]" : "[Lower]") + userInput3;

    int key3 = GetKeyPressed();
    while (key3 > 0) {
        // Check if the key is a letter, number, or symbol and modify the input accordingly
        if (((key3 >= 'A' && key3 <= 'Z') || (key3 >= 'a' && key3 <= 'z') || 
             (key3 >= '0' && key3 <= '9')) && (userInput.size() < 255)) {
            if (type) {
                // Convert to uppercase if the flag is set
                userInput3 += (char)toupper(key3);
            } else {
                // Convert to lowercase if the flag is not set
                userInput3 += (char)tolower(key3);
            }
        } else if (key3 >= 32 && key3 <= 126) {
            // Include symbols if they are printable characters
            userInput3 += (char)key3;
        }

        key3 = GetKeyPressed();
    }

    // Handle backspace
    if (IsKeyPressed(KEY_BACKSPACE) && !userInput3.empty()) {
        userInput3.pop_back();
    }

    int textWidth3 = MeasureText(displayText3.c_str(), 20);
    while (textWidth3 > inputBox.width + 50) { 
        userInput3.pop_back();
        displayText3 = (type ? "[Caps]" : "[Lower]") + userInput3;
        textWidth3 = MeasureText(displayText3.c_str(), 20);
    }
    
}