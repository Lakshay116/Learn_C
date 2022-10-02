#include <stdio.h>

int main()
{
    int a,b;
    printf("value of a\n");
    scanf("%d", &a);
    printf("value of b\n");
    scanf("%d", &b);
    printf("a+b=%d\n", a+b);

    if (a+b>=10)
    {
      printf("you are right\n");
    }
    
    return 0;
}
