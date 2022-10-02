#include <stdio.h>
int main()
{
    int a, n;
    printf("Press '0' for triangular star pattern\nPress '1' for reverse triangular star pattern\n");
    scanf("%d", &a);
    printf("How many rows you want to print.\n");
    scanf("%d", &n);
    if (a == 0)
    { 
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    else if (a == 1)
    {
        for (int i = 0; i <= n; i++)
        {
            for (int j = 0; j <= n - i - 1; j++)
            {
                printf("*");
            }

            printf("\n");
        }
    }
    else
    {
        printf("You give wrong input.");
    }
    system("pause");
    return 0;
}