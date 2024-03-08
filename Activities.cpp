#include "Activities.h"

Activity::Activity(){
    type = false;
    inputBox  = {420, 560, 90, 40};
    strAnswer = "print";
    
}


        //----------------------------------------------------------------------------------
void Activity::Input(){

            // make the shift not tongle
    if (IsKeyDown(KEY_LEFT_SHIFT) || IsKeyDown(KEY_RIGHT_SHIFT)) {
        type = true;
    } else {
        type = false;
    }

            
    std::string displayText = (type ? "[Caps]" : "[Lower]") + userInput;

    int key = GetKeyPressed();
    while (key > 0) {
    // Check if the key is a letter and modify the input accordingly
        if (((key >= 'A' && key <= 'Z') || (key >= 'a' && key <= 'z')) && (userInput.size() < 255))
        {
            if (type) {
                // Convert to uppercase if the flag is set
                userInput += (char)toupper(key);
            }
            else {
                // Convert to lowercase if the flag is not set
                userInput += (char)tolower(key);
            }
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

void Activity::DrawInputBox(){

    DrawRectangleRounded(inputBox, 0.1, 10, WHITE);
    DrawText(userInput.c_str(), inputBox.x + 5, inputBox.y + 5, 20, BLACK);
               
}

void Activity::CheckAnswer() {
    if (userInput == strAnswer) {
        // Correct answer
        DrawText("Correct!", 600, 650, 30, GREEN);
    } else {
        // Incorrect answer
        DrawText("Incorrect!", 600, 650, 30, RED);
    }
}

bool Activity::IsButtonPressed(Rectangle button) {
    Vector2 mousePos = GetMousePosition();
    return CheckCollisionPointRec(mousePos, button) && IsMouseButtonPressed(MOUSE_LEFT_BUTTON);
}