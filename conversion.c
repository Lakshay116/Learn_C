#include <stdio.h>
#include<iostream>
int main(int argc, char const *argv[])
{
    float cm, m, km, mi, in, ft, pound, kg;
    /*cm, m, km, mi, in, ft, pound, kg, aredenotes centimetre, metre, kilometre, miles, inch,
   foot, pound, kilogram respectively*/
    int a;

printf:
    printf("Press'0'for\n Quit\n");
    printf("What do you want to convert\n");
    printf("press'1'for\n Kilometre to Miles\n");
    printf("press'2'for\n Inches to Foot\n");
    printf("press'3'for\n Centimetre to Inches\n");
    printf("press'4'for\n Pound to Kilogram\n");
    printf("press'5'for\n Inches to Metre\n");

    scanf("%d", &a);

    if (a == 1)
    {
        printf("You convert Kilometre to Miles\n");
        printf("Lenght in kilometre is\n");
        scanf("%f", &km);
        mi = km / 1.609;
        printf("Length in Miles is %f\n", mi);
    }
    else if (a == 2)
    {
        printf("You convert Inches to Foot\n");
        printf("Lenght in Inch is\n");
        scanf("%f", &in);
        ft = in / 12;
        printf("Length in Foot is %f\n", ft);
    }
    else if (a == 3)
    {
        printf("You convert Centimetre to Inches\n");
        printf("Lenght in cm is\n");
        scanf("%f", &cm);
        in = cm / 2.54;
        printf("Length in Inch is %f\n", in);
    }
    else if (a == 4)
    {
        printf("You convert Pound to Kilogram\n");
        printf("Weight in pound is\n");
        scanf("%f", &pound);
        kg = pound / 2.205;
        printf("Weight in Kilogram is %f\n", kg);
    }
    else if (a == 5)
    {
        printf("You convert Inches to Metre\n");
        printf("Lenght in inch is\n");
        scanf("%f", &in);
        m = in / 39.37;
        printf("Length in Metre is %f\n", m);
    }
    else if (a == 0)
    {
        goto end;
    }
    else
    {
        printf("You give Wrong input. Please try again\n.");
    }
    system("pause");
    
    goto printf;
end:
    return 0;
}
