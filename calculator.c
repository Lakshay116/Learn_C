#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    char * operation;
    int num1, num2;
    operation = argv[1];
    num1 = atoi(argv[2]);
    num2 = atoi(argv[3]);

    printf("Operatio is %s\n", operation);
    printf("Num 1:%d\n", num1);
    printf("Num 2:%d\n", num2);

    if (strcmp(operation,"add")==0)
    {
        printf("Sum is %d\n",num1+num2);
    }
    if (strcmp(operation,"subtract")==0)
    {
        printf("Subtract is %d\n",num1-num2);
    }
    if (strcmp(operation,"multiply")==0)
    {
        printf("Multiply is %d\n",num1*num2);
    }
    if (strcmp(operation,"devide")==0)
    {
        printf("DEvide is %d\n",num1/num2);
    }
    return 0;
}
