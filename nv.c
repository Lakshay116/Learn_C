#include <stdio.h>
void arrayRev(int arr[])
{
    int temp;
    for (int i = 0; i < 7/2; i++)
    {
        
        temp = arr[i]; 
        arr[i] = arr[6-i];
        arr[6-i] = temp;
    }
}
void arrayprint(int arr[])
{
 for (int i = 0; i < 7; i++)
    {
        printf(" %d", arr[i]);
    }

}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    printf("Before reversing\n");
    arrayprint(arr);
    printf("\n");
    arrayRev(arr);
    printf("After reversing\n");
    arrayprint(arr);
    

    return 0;
}