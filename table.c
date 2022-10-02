#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a;
    printf("a=");
    scanf:
    scanf("%d", &a);
    if (a==0)
    {
        goto end; 
    }
    
    printf("%dx1=%d\n", a, a * 1);
    printf("%dx2=%d\n", a, a * 2);
    printf("%dx3=%d\n", a, a * 3);
    printf("%dx4=%d\n", a, a * 4);
    printf("%dx5=%d\n", a, a * 5);
    printf("%dx6=%d\n", a, a * 6);
    printf("%dx7=%d\n", a, a * 7);
    printf("%dx8=%d\n", a, a * 8);
    printf("%dx9=%d\n", a, a * 9);
    printf("%dx10=%d\n\a", a, a * 10);
    goto scanf;
    
    end:
    return 0;

}
