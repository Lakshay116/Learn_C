#include <stdio.h>
#include <string.h>
int main()
{
    char s1[30];
    char s2[30];
    char s3[]=" is friend of ";
    char s4[50];
    printf("1st  Name:\n");
    gets(s1);
   
    printf("2nd  Name:\n");
    gets(s2);

    strcpy(s4, strcat(s1 , strcat(s3, s2)));
    puts(s4);
    printf("%d",strlen(s4));
    return 0;
}
