#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0;

    printf("\n Enter Number :");
    scanf("%d",&No);

    if (No%2==0)
    {
        printf("\n Entered Number Is Even.");

    }
    else
    {
        printf("\n Entered Number Is Odd.");
    }

    getch();
    return 0;

}
