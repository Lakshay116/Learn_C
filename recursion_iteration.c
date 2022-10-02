#include <stdio.h>
int fib_recr(int n)
{
    if (n == 1 || n == 2)
    {
        return (n - 1);
    }
    else
    {
        return fib_recr(n - 1) + fib_recr(n - 2);
    }
}
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
    printf("Enter position fibonacci series:\n ");
    scanf("%d", &num);
    printf("The value of fibonacci no at position %d using iterative is %d\n",num, fib_iter(num));
    printf("The value of fibonacci no at position %d usig recursive is %d\n",num, fib_recr(num));
    return 0;
}