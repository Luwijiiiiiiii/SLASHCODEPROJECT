
#include "raylib.h"
#include <string>
#include <algorithm>

class SettingsButton {
public:
    // constructor
    SettingsButton();
    // functions
    void display();
    void Update();
    void Draw();
    void DrawSetting();
    void Drawlanguage();
    void DrawSlashcode();
    void DrawSlashcodeBase();
    void UpdateInput();
    bool isSettingsOpen1;
    std:: string userInput;

private:
    // variables

    // design
    Rectangle roundedRect;
    Rectangle buttonRect1;
    //setting button
    bool isSettingsOpen;
    Rectangle settingsButton;
    bool temporaryUnavailable;
    Rectangle journey;
    Rectangle backcolor;
    Rectangle journeyButton;
    Rectangle rankingButton;
    Rectangle Xshape;
    Rectangle Xshape1;
    Rectangle Xshape1_Collision;
    

};
