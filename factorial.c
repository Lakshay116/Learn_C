#include <stdio.h>
int factorial(int a)
{
    if (a == 0 || a == 1)
    {
        return 1;
    }
    else
    {

        return ((a)*factorial(a - 1));
    }
}
int main()
{
    int num;
    printf("Factorial of\n");
    scanf("%d", &num);
    printf("Factorial of %d is %d\n", num, factorial(num));
    return 0;
}
