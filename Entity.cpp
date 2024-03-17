#include "Animation.h"
#include "Entity.h"
AnimatedSprite playerAnimation;
AnimatedSprite playerHp;
AnimatedSprite enemyAnimation;
//0 for idle, 1 for attacking , 2 gettingdamage
Player::Player(const char* sprite, int playerState)
{
    //idle settings
    fileName = LoadTexture(sprite);
    spriteWidth = 64;
    spriteHeight = 64;
    frames = 4;
    playerX = 300;
    playerY = 340;
    health = 60;
    //animatedSprite(const char* filename,int spriteX, int spriteY, int spriteWidth, int spriteHeight, int frames, float animationSpeed)
    playerAnimation.animatedSprite(sprite, playerX, playerY, spriteWidth, spriteHeight, frames, 0.3f);
    playerHp.animatedSprite("resources/bg/playerHp.png", playerX - 10, playerY - 100, 94, 32, 7, 0.3f);
}
void Player::updatePlayer()
{
    float deltaTime = GetFrameTime();
    playerAnimation.Update(deltaTime);
    
}
void Player::drawPlayer() 
{
    playerAnimation.Draw();
    
}
int Player::getDamage(int updateHealth) 
{
    health = updateHealth;
    return health;
}
void Player::updateHp()
{
    int hp = getDamage(60);
    float deltaTime = GetFrameTime();
    playerHp.UpdateHp(deltaTime, hp);
}
void Player::drawPlayerHpBar()
{
    playerHp.Draw();
}
//to do scale image, enemy draw and hp management
Enemy::Enemy(const char* sprite, int playerState) 
{
    fileName = LoadTexture(sprite);
    spriteWidth = 128;
    spriteHeight = 128;
    frames = 2;
    enemyAnimation.animatedSprite(sprite,900, 270, spriteWidth, spriteHeight, frames, 0.5f);
}
void Enemy::updateEnemy()
{
    float deltaTime = GetFrameTime();
    enemyAnimation.Update(deltaTime);
}
void Enemy::drawEnemy() 
{
    enemyAnimation.Draw();
}
int Enemy::enemyAttack(int Health)
{
    Health -= 10;
    return Health;
}