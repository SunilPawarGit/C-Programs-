#include <stdio.h>
#include <conio.h>



int main()
{


        int No = 0;

        printf("\n Enter Number For Check Number Is Divisible By 5 And 7 : ");
        scanf("%d",&No);



        printf("\n\n\n======================**************========================\n\n");


        if   ( No % 5 == 0 && No % 7 == 0 )
        {
            printf("\n Number Is Divisible By Both.");
        }



        else  if (No % 5 == 0 )

        {
            printf("\n Number Is Divisible By 5.");
        }


        else if( No % 7 == 0)
        {
            printf("\n Number Is Divisible By 7.");
        }



        else
        {
            printf("\n Number Is Not Divisible By Both.");
        }


        printf("\n\n\n======================**************========================\n\n");



    getch();
    return 0;


}

