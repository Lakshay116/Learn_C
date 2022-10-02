#include <stdio.h>
int avg(int a, int b)
{
    return (a + b) / 2;
}
void googeveng(int (*ptr)(int, int))
{
    printf("Hello user Good Evening\n");
    printf("Average of 20 and 8 is %d\n", ptr(20, 8));
}
void goodafternoon(int (*ptr)(int, int))
{
    printf("Good Afternoon user\n");
    printf("Average of 21 and 51 is %d\n",ptr(21,51));

}
int main()
{
    int (*a)(int,int);
    a = avg;
    goodafternoon(a);
    return 0;
}