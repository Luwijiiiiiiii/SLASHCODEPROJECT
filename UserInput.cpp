#include "UserInput.h"
#include "Activities.h"

UserInput::UserInput(){
    type = false;
    userInput = "";
    inputBox  = {420, 560, 90, 40};
    //input2
    type2 = false;
    userInput2 = "";
    inputBox1  = {420, 560, 130, 40};
    
}




void UserInput::Input() {
    // make the shift not toggle
    if (IsKeyDown(KEY_LEFT_SHIFT) || IsKeyDown(KEY_RIGHT_SHIFT)) {
        type = true;
    } else {
        type = false;
    }

    std::string displayText = (type ? "[Caps]" : "[Lower]") + userInput;

    int key = GetKeyPressed();
    while (key > 0) {
        // Check if the key is a letter, number, or symbol and modify the input accordingly
        if (((key >= 'A' && key <= 'Z') || (key >= 'a' && key <= 'z') || 
             (key >= '0' && key <= '9')) && (userInput.size() < 255)) {
            if (type) {
                // Convert to uppercase if the flag is set
                userInput += (char)toupper(key);
            } else {
                // Convert to lowercase if the flag is not set
                userInput += (char)tolower(key);
            }
        } else if (key >= 32 && key <= 126) {
            // Include symbols if they are printable characters
            userInput += (char)key;
        }

        key = GetKeyPressed();
    }

    // Handle backspace
    if (IsKeyPressed(KEY_BACKSPACE) && !userInput.empty()) {
        userInput.pop_back();
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
    if (IsKeyDown(KEY_LEFT_SHIFT) || IsKeyDown(KEY_RIGHT_SHIFT)) {
        type2 = true;
    } else {
        type2 = false;
    }

    std::string displayText2 = (type2 ? "[Caps]" : "[Lower]") + userInput2;

    int key2 = GetKeyPressed();
    while (key2 > 0) {
        // Check if the key is a letter, number, or symbol and modify the input accordingly
        if (((key2 >= 'A' && key2 <= 'Z') || (key2 >= 'a' && key2 <= 'z') || 
             (key2 >= '0' && key2 <= '9')) && (userInput2.size() < 255)) {
            if (type2) {
                // Convert to uppercase if the flag is set
                userInput2 += (char)toupper(key2);
            } else {
                // Convert to lowercase if the flag is not set
                userInput2 += (char)tolower(key2);
            }
        } else if (key2 >= 32 && key2 <= 126) {
            // Include symbols if they are printable characters
            userInput2 += (char)key2;
        }

        key2 = GetKeyPressed();
    }

    // Handle backspace
    if (IsKeyPressed(KEY_BACKSPACE) && !userInput2.empty()) {
        userInput2.pop_back();
    }

    int textWidth2 = MeasureText(displayText2.c_str(), 20);
    while (textWidth2 > inputBox1.width + 65) { // Assuming the white box has a width of 200
        userInput2.pop_back();
        displayText2 = (type ? "[Caps]" : "[Lower]") + userInput2;
        textWidth2 = MeasureText(displayText2.c_str(), 20);
    }
    
}