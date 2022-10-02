#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a[3][3]={{5,8,6},{4,8,2},{4,7,6}};
    
        
    for (int i = 0; i < 3; i++)
    {   
        for (int j = 0; j < 3; j++)
    {
        printf("%d ", a[i][j]);
    }
    printf("\n");
       
    }
    
    return 0;
}
