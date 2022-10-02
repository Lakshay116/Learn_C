#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a=74, d=84;
    int *ptr= &a;
    printf("the value of a is %d\n", *ptr);
    printf("the adress of pointer is %x\n", &ptr);
    return 0;
}
