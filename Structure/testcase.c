#include<stdio.h>
int main(int argc, char const *argv[])
{
    struct pokemon
    {
        int hp;
        int attack;
        int speed;
        char tier;
    };
    struct pokemon pikachu;
    pikachu.attack = 10;
    printf("%d",pikachu.attack);
    
    return 0;
}
