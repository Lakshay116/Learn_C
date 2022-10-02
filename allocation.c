#include <stdio.h>
#include <stdlib.h>

int main()
{

    int *ptr;
    ptr = (int *)malloc(5 * sizeof(int));
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the value at %d is\n",i);
        scanf("%d", &ptr[i]);
        
    }
    for (int i = 0; i < 5; i++)
    {
        printf("THe value at %d is %d\n",i,ptr[i]);
    }
    free(ptr);
    int *a;
    a = (int*) malloc( 7*sizeof(int));
    for (int i = 0; i < 7; i++)
    {
        printf("Enter value at %d\n ",i);
        scanf("%d",&a[i]);

    }
    for (int i = 0; i < 7; i++)
    {
        printf("THe value at %d is %d\n",i,a[i]);
    }
    
    
    
    return 0;
}