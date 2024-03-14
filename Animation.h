#include "raylib.h"

class AnimatedSprite {
public:
    Texture2D spriteSheet;
    Texture2D spriteSheet2;
    Rectangle sourceRect;
    Vector2 position;
    float frameTime;
    int frameCount;
    int currentFrame;
    int frameLimit;

    AnimatedSprite(const char* filename, int spriteWidth, int spriteHeight, int frames, float animationSpeed);
    AnimatedSprite(const char* filename, const char* FileName, int spriteWidth, int spriteHeight, int frames, float animationSpeed);
    //void update is for looped animation

    void Update(float deltaTime);
    void Update2nd(float deltaTime);
    //void updatepro is for controlled animation

    void UpdatePro(float deltaTime, int limitofFrames); //limit of frames to reach 
    void Draw();
};
