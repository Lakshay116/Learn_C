#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int num[20];
    int antinum[20];
    int result;
    // palindrome
    printf("Enter number you want to check palindrome\n");
    scanf("%s", &num);
    strcpy(antinum, num);
    strrev(antinum);
    result = strcmp(num, antinum);
    printf("The number is %s and reverse of this number is %s\n",num,antinum);
    printf("So ");
    if (result==0)
    {
        printf("Number is palindrome\n");
    }
    
    else{

        printf("Number is not palindrome");
    }
    


    return 0;
}