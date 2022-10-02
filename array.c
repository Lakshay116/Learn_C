#include<stdio.h>
int main()
{
    int num[10];
    for (int i = 0; i < 4; i++)
    {
        printf("Enter the value of %d\n", i);
        scanf("%d", &num[i]);
        
        
    }
    for ( int i = 0; i < 4; i++)
    {
        printf("Value of %d is %d\n", i, num[i]);
        
    }
    
    
    

    return 0;
}
