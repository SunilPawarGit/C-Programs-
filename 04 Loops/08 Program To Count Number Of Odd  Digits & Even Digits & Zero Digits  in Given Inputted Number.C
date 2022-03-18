#include <stdio.h>
#include <conio.h>


int main()
{
	int no=0,temp=0,dig=0,ecnt=0,ocnt=0,acnt=0,zcnt=0;



	printf("\n Enter number  = ");
	scanf("%d",&no);



	temp = no;


	while(temp!=0)
	{
		dig=temp%10;
		temp/=10;

		acnt++;

		if(dig==0)
        {
            zcnt++;
        }

        else if(dig%2==0)
		{
			ecnt++;
        }

        else
        {
            ocnt++;
        }


    }


    printf("\n\n\n======================**************========================\n\n\n");


    printf("\n  ALL Digit Count : %d ",acnt);
    printf("\n  ALL Zero  Count : %d ",zcnt);
    printf("\n  Even Digit Count : %d",ecnt);
    printf("\n  Odd Digit Count : %d",ocnt);


    printf("\n\n\n======================**************========================\n\n\n");

    getch();
    return 0;





}
