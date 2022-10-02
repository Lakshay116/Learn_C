#include <stdio.h>
int main()
{
    int code;
    printf("what is your code?\n");
    scanf("%d", &code);

    switch (code)
    {
    case 1:
        printf("Your name is Lakshay Jnagra\n");
        switch (code)
        {
        case 1:
            printf("Hello\3\n");
            break;

        default:
            break;
        }
        break;
    case 2:
        printf("Your name is Annu Jangra\n");
        break;
    case 3:
        printf("Your name is Ankit Jnagra\n");
        break;
    default:
        printf("Not Reconized\n");
        break;
    }
    system("pause");

    if (code == 1)
    {
        printf("Hi Lakshay\n");
    }
    else if (code == 2)
    {
        printf("Hi Annu\n");
    }
    else if (code == 3)
    {
        printf("Hi Ankit\n");
    }
    system("pause");

    return 0;
}