#include "raylib.h"

class Player
{
    

    public:
    Texture2D fileName;
    Rectangle playerRect;
    void updatePlayer();
    void drawPlayer();
    int getDamage(int updateHealth);
    int playerState;
    int spriteWidth;
    int spriteHeight;
    Player(const char* sprite,int playerState);
    int playerX;
    int playerY; 
    int frames;

    //for hp of player 
    int health;
    void drawPlayerHpBar();
    void updateHp();
    Rectangle hpRect;
};
class Enemy {
    public:
    Texture2D fileName;
    Rectangle enemyRect();

    void updateEnemy();
    void drawEnemy();
    int enemyAttack(int health);

    int playerState;
    int spriteWidth;
    int spriteHeight;

    Enemy(const char* sprite,int enemyState);
    int enemyX;
    int enemyY; 
    int frames;
};