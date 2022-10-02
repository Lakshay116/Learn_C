#include <stdio.h>
int fib_iter(int n)
{
    int a = 0, b = 1;
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
        printf("Enter fibonacci series of  position\n");
        scanf("%d", &num);
        printf("fibonacci serie of %d position is %d",num, fib_iter(num));

        return 0;
    }
    