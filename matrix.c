#include <stdio.h>
int main()
{
    int ra, ca, rb, cb, multiply;
    int a[20][20], b[20][20], result[20][20];
    printf("Enter rows in First Matrix\n");
    scanf("%d", &ra);
    printf("Enter columns in First Matrix\n");
    scanf("%d", &ca);
    printf("Enter First Matrix\n");
    for (int i = 0; i < ra; i++)
    {
        for (int j = 0; j < ca; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter raws in Second Matrix\n");
    scanf("%d", &rb);
    printf("Enter Columns in Second Matrix\n");
    scanf("%d", &cb);
    printf("Enter Second Matrix\n");
    for (int i = 0; i < rb; i++)
    {
        for (int j = 0; j < cb; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    // for multiplication
    
    
        for (int i = 0; i < ra; i++)
        {
            for (int j = 0; j < cb; j++)
            {
                for (int k = 0; k < rb; k++)
                {
                    multiply += a[i][k] * b[k][j];
                }

                result[i][j] = multiply;
                multiply = 0;
            }
        }
    
    for (int i = 0; i < ra; i++)
    {
        for (int j = 0; j < cb; j++)
        {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}