#include <stdio.h>
#include <conio.h>


int main()
{

    int No1 = 0, No2 = 0;


    printf("\n Enter 1st Number :");
    scanf("%d",&No1);

    printf("\n Enter 2nd Number :");
    scanf("%d",&No2);


    printf("\n\n========================***************===========================\n\n");

    printf("\n Maximum Number Is : %d",(No1>No2 ? No1:No2));

    printf("\n\n\n========================***************===========================\n\n");


    getch();
    return 0;


}
