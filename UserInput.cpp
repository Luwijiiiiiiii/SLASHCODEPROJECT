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
    userInput4 = "";
    inputBox4 = {420, 615, 175, 40};
    //input4
    userInput5 = "";
    inputBox5 = {420, 560, 115, 40};
    userInput6 = "";
    inputBox6 = {420, 610, 115, 40};
    userInput7 = "";
    inputBox7 = {420, 670, 175, 40};
    //input 5
    userInput8 = "";
    inputBox8 = {410,640,60,40};
    userInput9 = "";
    inputBox9 = {410,770,70,40};

    
}


//----------------IINPUT 1----------------------------------------------------
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

//---------------input 2--------------------------------------------------------------------------------
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
//-----------------------------------------------------------------------------------------------

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
    



 // second input act 3
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
//----------------------------------------------------------------------------------------------



//------------activity 4---------------------------------------------------------------------

void UserInput::Input4() {
 
    if (CheckCollisionPointRec(GetMousePosition(), inputBox5))mouseOnText = true;
    else mouseOnText = false;
    std::string displayText5 = (type ? "[Caps]" : "[Lower]") + userInput5;

        if (mouseOnText)
        {
            int key = GetCharPressed();
            // Check if more characters have been pressed on the same frame
            while (key > 0)
            {
                // NOTE: Only allow keys in range [32..125]
                if ((key >= 32) && (key <= 125))
                {
                    userInput5 += (char)key;

                }

                key = GetCharPressed(); 
            }

            if (IsKeyPressed(KEY_BACKSPACE) && !userInput5.empty()) {
                userInput5.pop_back();
            }
  
            }
            int textWidth5 = MeasureText(displayText5.c_str(), 20);
            while (textWidth5 > inputBox5.width + 50) { 
            userInput5.pop_back();
            displayText5 = (type ? "[Caps]" : "[Lower]") + userInput5;
            textWidth5 = MeasureText(displayText5.c_str(), 20);
    }
    

//INPUT 2 ACT 4

 
    if (CheckCollisionPointRec(GetMousePosition(), inputBox6))mouseOnText = true;
    else mouseOnText = false;
    std::string displayText6 = (type ? "[Caps]" : "[Lower]") + userInput6;

        if (mouseOnText)
        {
            int key = GetCharPressed();
            // Check if more characters have been pressed on the same frame
            while (key > 0)
            {
                // NOTE: Only allow keys in range [32..125]
                if ((key >= 32) && (key <= 125))
                {
                    userInput6 += (char)key;

                }

                key = GetCharPressed(); 
            }

            if (IsKeyPressed(KEY_BACKSPACE) && !userInput6.empty()) {
                userInput6.pop_back();
            }
  
            }
            int textWidth6 = MeasureText(displayText6.c_str(), 20);
            while (textWidth6 > inputBox5.width + 50) { 
            userInput6.pop_back();
            displayText6 = (type ? "[Caps]" : "[Lower]") + userInput6;
            textWidth6 = MeasureText(displayText6.c_str(), 20);
    }
    

// input 3 act 4

 
    if (CheckCollisionPointRec(GetMousePosition(), inputBox7))mouseOnText = true;
    else mouseOnText = false;
    std::string displayText7 = (type ? "[Caps]" : "[Lower]") + userInput7;

        if (mouseOnText)
        {
            int key = GetCharPressed();
            // Check if more characters have been pressed on the same frame
            while (key > 0)
            {
                // NOTE: Only allow keys in range [32..125]
                if ((key >= 32) && (key <= 125))
                {
                    userInput7 += (char)key;

                }

                key = GetCharPressed(); 
            }

            if (IsKeyPressed(KEY_BACKSPACE) && !userInput7.empty()) {
                userInput7.pop_back();
            }
  
            }
            int textWidth7 = MeasureText(displayText7.c_str(), 20);
            while (textWidth7 > inputBox7.width + 50) { 
            userInput7.pop_back();
            displayText7 = (type ? "[Caps]" : "[Lower]") + userInput7;
            textWidth7 = MeasureText(displayText7.c_str(), 20);
    }
    
}
//-------end of act 4------------------------------------------------------------------------------------------------

//--------act 5 ---------------------------------------------------------------------------------------------------------
void UserInput::Input5() {
 
    if (CheckCollisionPointRec(GetMousePosition(), inputBox8))mouseOnText = true;
    else mouseOnText = false;
    std::string displayText8 = (type ? "[Caps]" : "[Lower]") + userInput8;

        if (mouseOnText)
        {
            int key = GetCharPressed();
            // Check if more characters have been pressed on the same frame
            while (key > 0)
            {
                // NOTE: Only allow keys in range [32..125]
                if ((key >= 32) && (key <= 125))
                {
                    userInput8 += (char)key;

                }

                key = GetCharPressed(); 
            }

            if (IsKeyPressed(KEY_BACKSPACE) && !userInput8.empty()) {
                userInput8.pop_back();
            }
  
            }
            int textWidth8 = MeasureText(displayText8.c_str(), 20);
            while (textWidth8 > inputBox8.width + 50) { 
            userInput8.pop_back();
            displayText8 = (type ? "[Caps]" : "[Lower]") + userInput8;
            textWidth8 = MeasureText(displayText8.c_str(), 20);
    }
// input 2 act 5
    if (CheckCollisionPointRec(GetMousePosition(), inputBox9))mouseOnText = true;
    else mouseOnText = false;
    std::string displayText9 = (type ? "[Caps]" : "[Lower]") + userInput9;

        if (mouseOnText)
        {
            int key = GetCharPressed();
            // Check if more characters have been pressed on the same frame
            while (key > 0)
            {
                // NOTE: Only allow keys in range [32..125]
                if ((key >= 32) && (key <= 125))
                {
                    userInput9 += (char)key;

                }

                key = GetCharPressed(); 
            }

            if (IsKeyPressed(KEY_BACKSPACE) && !userInput9.empty()) {
                userInput9.pop_back();
            }
  
            }
            int textWidth9 = MeasureText(displayText9.c_str(), 20);
            while (textWidth9 > inputBox9.width + 50) { 
            userInput9.pop_back();
            displayText9 = (type ? "[Caps]" : "[Lower]") + userInput9;
            textWidth9 = MeasureText(displayText8.c_str(), 20);
    }

}