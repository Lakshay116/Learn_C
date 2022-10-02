#include <stdio.h>
#define ABC 5

#define LKA 52

int main()
{
#ifndef AB
    printf("%d\n", LKA);
#endif
#ifdef ABC
    printf("%d", ABC);
#endif

    return 0;
}