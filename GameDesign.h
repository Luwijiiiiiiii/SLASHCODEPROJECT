
#include "raylib.h"

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

    bool isSettingsOpen1;
    

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
