#include <stdio.h>
int main(int argc, char const *argv[])
{
    // conversion of Length from metre to centimeter
    float m, cm, inch, mm;
    printf:
    printf("Lengt in metre \n");
    scanf("%fm", &m);

    cm = 100 * m;
    printf("Length in cm is\n %.2f cm\n", cm);
    while (cm==5000)
    {
        continue;
    }
    
    

    inch = 39.3701 * m;
    printf("Length in inch is\n %.2f inch\n", inch);

    mm = 1000 * m;
    printf("Length in mili metre is\n %.2f mm\n", mm);

    goto printf;
    return 0;
}
