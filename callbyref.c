#include <stdio.h>
int add_subtract(int *a, int *b)
{
  *a=*a+*b;
  *b=*a-*b-*b;
    printf("Now value of a is a+b =%d\n",*a);
    printf("Now value of b is a-b =%d\n",*b);
}

int main()
{
    int x,y;
    printf("enter x\n");
    scanf("%d",&x);
    printf("Enter y\n");
    scanf("%d",&y);
    add_subtract(&x,&y);
    return 0;
}