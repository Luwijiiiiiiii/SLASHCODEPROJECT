#include "Animation.h"

void AnimatedSprite::animatedSprite(const char* filename, int spriteWidth, int spriteHeight, int frames, float animationSpeed)
{
    spriteSheet = LoadTexture(filename);
    sourceRect = { 0.0f, 0.0f, (float)spriteWidth, (float)spriteHeight };
    position = { 0.0f, 0.0f };
    frameTime = animationSpeed;
    frameCount = frames;
    currentFrame = 0;
}
void AnimatedSprite::animatedSprite(const char* filename,int spriteX, int spriteY, int spriteWidth, int spriteHeight, int frames, float animationSpeed)
{
    spriteSheet = LoadTexture(filename);
    sourceRect = { 0.0f, 0.0f, (float)spriteWidth , (float)spriteHeight };
    position = {  (float)spriteX, (float)spriteY};
    frameTime = animationSpeed;
    frameCount = frames;
    currentFrame = 0;
}
void AnimatedSprite::animatedSprite(const char* filename,const char* FileName, int spriteWidth, int spriteHeight, int frames, float animationSpeed)
{
    spriteSheet = LoadTexture(filename);
    spriteSheet2 = LoadTexture(FileName);
    sourceRect = { 0.0f, 0.0f, (float)spriteWidth, (float)spriteHeight };
    position = { 0.0f, 0.0f };
    frameTime = animationSpeed;
    frameCount = frames;
    currentFrame = 0;
}

void AnimatedSprite::UpdateHp(float deltaTime, int hp) 
{
    frameTime -= deltaTime;
    if(frameTime <= 0.0f)
    {
        frameTime = 0.1f;
        while(hp >= 0)
        {
            currentFrame++;

            if(currentFrame >= frameCount)
            currentFrame = 0;

            sourceRect.x = (float)(currentFrame * sourceRect.width);
            hp = hp - 10;
        }
        
    }
}
void AnimatedSprite::Update(float deltaTime)
{
    frameTime -= deltaTime;
    if(frameTime <= 0.0f)
    {
        frameTime = 0.1f;
        currentFrame++;

        if(currentFrame >= frameCount)
            currentFrame = 0;

        sourceRect.x = (float)(currentFrame * sourceRect.width);
    }
}
void AnimatedSprite::Update2nd(float deltaTime)
{
    frameTime -= deltaTime;
    if(frameTime <= 0.0f)
    {   
        frameTime = 0.1f;
        currentFrame++;
        sourceRect.x = (float)(currentFrame * sourceRect.width);
        if(currentFrame >= frameCount) 
        {
            spriteSheet = spriteSheet2;
            currentFrame = 0;
            currentFrame++;
            sourceRect.x = (float)(currentFrame * sourceRect.width);
        }
            

        
    }
}
void AnimatedSprite::Update3rd(float deltaTime)
{
    frameTime -= deltaTime;
    if(frameTime <= 0.0f)
    {
        frameTime = 0.2f;
        currentFrame++;
        sourceRect.x = (float)(currentFrame * sourceRect.width);

        if(currentFrame >= frameCount) 
        {
            spriteSheet = spriteSheet2;
            currentFrame3rd = 0;
            currentFrame3rd++;
            sourceRect.x = (float)(currentFrame * sourceRect.width);
        
        }
        if(currentFrame3rd == frameCount) {
            spriteSheet = spriteSheet3;
            currentFrame = 0;
            currentFrame++;
            sourceRect.x = (float)(currentFrame * sourceRect.width);  
        }
            

        
    }
}
void AnimatedSprite::UpdatePro(float deltaTime , int limitofFrames)
{
    frameLimit = limitofFrames;
    frameTime -= deltaTime;
    if(frameTime <= 0.0f)
    {
        frameTime = 0.2f;
        currentFrame++;
        
        if(currentFrame >= frameCount)
            currentFrame = frameLimit;

        sourceRect.x = (float)(currentFrame * sourceRect.width);
    }
}
void AnimatedSprite::Draw()
{
    DrawTextureRec(spriteSheet, sourceRect, position, WHITE);
}