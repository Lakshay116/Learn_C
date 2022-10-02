#include <stdio.h>

int main(void)

{                   
    char mathematics, science;

    printf("Are you passed in Mathematics? (y/n)\n ");
    scanf("%c",&mathematics);

    printf("Are you passed in Science? (y/n)\n");
    scanf(" %c",&science);

    printf("verify the information.\npassed in Mathematics: %c\npassed in Science: %c\n", mathematics, science);

    if ((mathematics=='y') && (science=='y')) {
        printf("you are prized by 45 rupees\n");
    }
    else if ((mathematics=='y') && (science=='n')){
        printf("you are prized by 15 rupees\n");
    }
    else if((mathematics=='n') && (science=='y')) {
        printf("you are prized by 15 rupees\n");
    }
    else
    printf("No Prize(you are failed)");

    system("pause");
    return 0;
}
