#include <stdio.h>
#include <conio.h>


int main()
{

    int No1 = 0, No2 = 0 , No3 = 0;


    printf("\n Enter 1st Number :");
    scanf("%d",&No1);

    printf("\n Enter 2nd Number :");
    scanf("%d",&No2);

    printf("\n Enter 3rd Number :");
    scanf("%d",&No3);


    if (No1 > No2 && No1 > No3)
    {
        printf("\n No1 : %d Number Is Maximum.", No1);
    }

    else if ( No2 > No1 && No2 > No3)

    {
        printf("\n No2 : %d Number Is Maximum.", No2);
    }



    else
    {
        printf(" \n No3 : %d Number Is Maximum.",No3);
    }

    getch();
    return 0;

}
