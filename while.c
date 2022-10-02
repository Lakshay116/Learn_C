#include <stdio.h>
int main()
{
    int a, b = 0;
    printf("Enter a\n");
    scanf("%d", &a);

    while (a > b)
    {
        printf("%d\n", b + 1);
        b = b + 1;
    }
    return 0;
}
