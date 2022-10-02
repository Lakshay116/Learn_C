#include <stdio.h>
int fib_iter(int n)
{
    int a, b;
    a = 0;
    b = 1;
    for (int i = 0; i < n - 1; i++)
    {
        b = a + b;
        a = b - a;
    }
    return a;
}

int main()
{
    int num;
    scanf("%d", &num);
    printf("%d", fib_iter(num));
    return 0;
}