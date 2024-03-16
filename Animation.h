#include "raylib.h"

class AnimatedSprite {
public:
    Texture2D spriteSheet;
    Texture2D spriteSheet2;
    Texture2D spriteSheet3;
    bool isThird = false;
    Rectangle sourceRect;
    Vector2 position;
    float frameTime;
    int frameCount;
    int currentFrame;
    int frameLimit;
    int currentFrame3rd;

    void animatedSprite(const char* filename, int spriteWidth, int spriteHeight, int frames, float animationSpeed);
    void animatedSprite(const char* filename,int spriteX, int spriteY, int spriteWidth, int spriteHeight, int frames, float animationSpeed);
    void animatedSprite(const char* filename, const char* FileName, int spriteWidth, int spriteHeight, int frames, float animationSpeed);
    //void update is for looped animation
    void UpdateHp(float deltaTime, int hp);
    void Update(float deltaTime);
    void Update2nd(float deltaTime);
    void Update3rd(float deltaTime);
    //void updatepro is for controlled animation

    void UpdatePro(float deltaTime, int limitofFrames); //limit of frames to reach 
    void Draw();
};
