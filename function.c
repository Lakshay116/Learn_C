#include <stdio.h>
int sum(int a, int b)
{
    return a + b;
}
int main(int argc, char const *argv[])
{
    int a, b, c;
    printf("a=\n");
    scanf("%d", &a);
    printf("b=\n");
    scanf("%d", &b);
    c = sum(a, b);
    printf("Sum is %d", c);
     return 0;
}
