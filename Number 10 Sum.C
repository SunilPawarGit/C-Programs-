#include<stdio.h>
#include<conio.h>
int main()
{

    int i=0,No=0,Sum=0;
    NXT:
        if(i<10)
        {
            printf("Enter Number:");
            scanf("%d",&No);
            i++;
            Sum=Sum+No;
            goto NXT;
        }
        else
        {

            printf("Sum=%d",Sum);
        }
    getch();
    return 0;

}
