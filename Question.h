#include "raylib.h"
#include <algorithm>

#include <string>
using namespace std;
class Question{
public:
    typedef enum QuestionState { question1 = 0, question2, question3, question4 } QuestionState;
    Rectangle questionBox;
    Rectangle Box;
    Vector2 axisPoint;
    string userInput;
    string answer;
    bool mouseOnText = false;
    bool answerIsCorrect = false;
    

    void textBox(int rectX, int rectY, int rectWidth, int rectHeight);
    void ResultBox(int rectX, int rectY, int rectWidth, int rectHeight);
    void drawResultBox();
    void drawTextBox();
    void Update();
    void drawUserInput();
    void checkQuestionAndAnswer();
    QuestionState currentQuestion = question1;
};