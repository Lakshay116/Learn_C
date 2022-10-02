#include <stdio.h>
#include <string.h>
struct driver
{
    char name[30];
    char dlno[30];
    char route[50];
    int kms;
};
struct driver d1, d2, d3;
int main()
{
    printf("**Details for 1st Driver**\n");
    printf("Enter your Name:\n");
    scanf("%s", &d1.name);
    printf("Driving Licence No:\n");
    scanf("%s", &d1.dlno);
    printf("Enter Your Route:\n");
    scanf("%s", &d1.route);
    printf("How much Distance you covered:\n");
    scanf("%d", &d1.kms);

    printf("\n");
    printf("**Details for 2nd Driver**\n");
    printf("Enter your Name:\n");
    scanf("%s", &d2.name);
    printf("Driving Licence No:\n");
    scanf("%s", &d2.dlno);
    printf("Enter Your Route:\n");
    scanf("%s", &d2.route);
    printf("How much Distance you covered:\n");
    scanf("%d", &d2.kms);
    printf("\n");

    printf("**Details for 3rd Driver**\n");
    printf("Enter your Name:\n");
    scanf("%s", &d3.name);
    printf("Driving Licence No:\n");
    scanf("%s", &d3.dlno);
    printf("Enter Your Route:\n");
    scanf("%s", &d3.route);
    printf("How much Distance you covered:\n");
    scanf("%d", &d3.kms);
    printf("\n");

    printf("\2\2\2\2  Details of Drivers  \2\2\2\2\n");
    printf("Details of First driver\n");
    printf("Name: %s\nDriving Licence No: %s\nRoute: %s\nDistance Covered: %d\n", d1.name, d1.dlno, d1.route, d1.kms);
    printf("\n");

    printf("Details of Second driver\n");
    printf("Name: %s\nDriving Licence No: %s\nRoute: %s\nDistance Covered: %d\n", d2.name, d2.dlno, d2.route, d2.kms);
    printf("\n");

    printf("Details of Third driver\n");
    printf("Name: %s\nDriving Licence No: %s\nRoute: %s\nDistance Covered: %d\n", d3.name, d3.dlno, d3.route, d3.kms);
    system("pause");
    return 0;
}
