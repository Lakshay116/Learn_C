#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    char name[50];
    int n;
    int i = 0;
    int win = 0, loose = 0, draw = 0;

    printf("ROCK , PAPER & SCISSOR GAME\n\n");
    printf("Enter Your Name:\n");
    scanf("%s", &name);
    printf("\n");
    printf("GAME START...\n");
    printf("PLAYER 1: %s\n", name);
    printf("PLAYER 2: COMPUTER\n");
    printf("PRESS\n'0' for ROCK\n'1' for PAPER\n'2' for SCISSOR\n\n");
    while (i < 3)
    {
        i++;
        printf("%s's Turn\n", name);
        scanf("%d", &n);
        printf("Computer's Turn\n");
        srand(time(NULL));
        int a = rand() % 3;
        printf("Computer Choose: %d\n", a);
        if (n == a)
        {
            printf("Game is Draw\n");
            draw++;
        }
        else if (n == 0 && a == 2 || n == 1 && a == 0 || n == 2 && a == 1)
        {
            printf("%s Wins\n", name);
            win++;
        }
        else
        {
            printf("%s Looses Game\n", name);
            loose++;
        }
    }
    printf("Game Over\n\n");
    if (win == 0 && loose == 3 || win == 1 && loose == 2 || draw == 2 && loose == 1 || loose == 2 && draw == 1)
    {
        printf("you loose\n");
    }
    if (win == 1 && draw == 2 || win == 2 && draw == 1 || win == 2 && loose == 1 || win == 3)
    {
        printf("You wins\n");
    }
    if (win == 1 && draw == 1 && loose == 1 || draw == 3)
    {
        printf("Game is Draw\n");
    }

    system("pause");

    return 0;
}
