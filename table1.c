#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, i;

    printf("Enter number you want to multiplication table of\n");

    scanf("%d", &a);

    i = 1;

    while (i <= 10)
    {

        printf("%d x %d = %d\n", a, i, a * i);
        i++;
    }

    return 0;
}
