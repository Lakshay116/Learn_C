#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i = 1;
    char *ptr;
    printf("\4 \4 Abc Pvt. Ltd. \4 \4\n\n");
    while (i < 4)
    {
        printf("Employee %d:\nEnter no of character in your employee id\n", i);
        scanf("%d", &n);
        ptr = (char *)malloc(n * sizeof(char));
        printf("Enter your employee id %d\n", i++);
        scanf("%s", ptr);
        printf("your Employee  id is %s\n", ptr);
    }

    return 0;
}