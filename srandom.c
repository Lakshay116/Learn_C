#include<stdio.h>
#include<stdlib.h>
int main()
{
    srand(time(1));
    printf("%d",rand()%3);
    return 0;
}