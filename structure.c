#include <stdio.h>
#include <string.h>
struct Sudent
{
    char name[30];
    int roll_no;
    float Marks;
};
struct Sudent s1, s2, s3, s4;

int main()
{
    
    strcpy(s1.name,"Lakshay");
    s1.roll_no = 1;
    s1.Marks = 80;
    printf("Name:%s\nRoll no.:%d\nMarks:%.2f\n\n",s1.name,s1.roll_no,s1.Marks);

    strcpy(s2.name,"Ankit");
    s2.roll_no=2;
    s2.Marks=75;
    printf("Name:%s\nRoll no.:%d\nMarks:%.2f\n\n",s2.name,s2.roll_no,s2.Marks);
    
    strcpy(s3.name,"Annu");
    s3.roll_no=3;
    s3.Marks=60;
    printf("Name:%s\nRoll no.:%d\nMarks:%.2f\n\n",s3.name,s3.roll_no,s3.Marks); 

    strcpy(s4.name,"Jatin");
    s4.roll_no=4;
    s4.Marks=85;
    printf("Name:%s\nRoll no.:%d\nMarks:%.2f\n",s4.name,s4.roll_no,s4.Marks); 

return 0;
}
    