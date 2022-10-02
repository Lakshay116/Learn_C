#include <stdio.h>

int main(int argc, char const *argv[])
{
    float a, b;
    
    printf("a=\n");
    scanf("%f", &a);

    printf("b=\n");
    scanf("%f", &b);

    printf("a/b=%f\n", a/b);
    system("pause");
    return 0;
}
