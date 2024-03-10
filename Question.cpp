#include "Question.h"
/***
Note: these are the key variables
Rectangle questionBox;
Vector2 axisPoint;
string userInput;
***/

void Question::textBox(int rectX, int rectY, int rectWidth, int rectHeight)
{
    questionBox.x = rectX;
    questionBox.y = rectY;
    questionBox.width = rectWidth;
    questionBox.height = rectHeight;
}
void Question::ResultBox(int rectX, int rectY, int rectWidth, int rectHeight)
{
    Box.x = rectX;
    Box.y = rectY;
    Box.height = rectHeight;
    Box.width = rectWidth;
}
void Question::drawResultBox() 
{
    DrawRectanglePro(Box, {0,0}, 0.0f, LIGHTGRAY);
}
void Question::drawTextBox() 
{
    axisPoint = {0, 0};
    // Get the mouse cursor position
    Vector2 mousePos = GetMousePosition();
    DrawRectanglePro(questionBox, axisPoint, 0.0f, LIGHTGRAY);
    // Check if the mouse cursor collides with the rectangle
    if (CheckCollisionPointRec(mousePos, questionBox)) 
    {
        // Handle collision (e.g., change color, print a message, etc.)
        DrawRectangleLinesEx(questionBox, 1.1f, RED);
    } else 
        {
            DrawRectangleLinesEx(questionBox, 1.1f, BLACK);
        }
    
}
void Question::Update() //needed to accept user input
{
    // Update
        int key = GetKeyPressed();
        while (key > 0) {
            if ((key >= 32) && (key <= 125) && (userInput.size() < 255)) {
                userInput += (char)key;
            }

            key = GetKeyPressed(); // Check next character in the queue
        }

        if (IsKeyPressed(KEY_BACKSPACE)) {
            userInput.pop_back();
        }
        std::transform(userInput.begin(), userInput.end(), userInput.begin(), ::tolower);

}
void Question::drawUserInput() //draw the text that is inputed
{
    DrawText((userInput).c_str(), questionBox.x + 3, questionBox.y + 2, 20, BLACK);
}
void Question::checkQuestionAndAnswer() //check answer sample
{
    QuestionState currentQuestion = question1;
    switch(currentQuestion)
    {
        case question1:
        {
            answer = "print";
            if(IsKeyPressed(KEY_ENTER) && userInput == answer ) 
            {
                answerIsCorrect = true;
                DrawText("Correct", Box.x + 3, Box.y + 2, 20, BLACK);
                currentQuestion = question2;
            }
        }
        break;
    }
}
