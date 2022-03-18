
#include <stdio.h>
#include <conio.h>


int main()
{
	int no=0,temp,dig = 0 ,d_Bit = 0;


	printf("\n Enter Number For Find Out Maximum Digit From It : ");
	scanf("%d",&no);


	temp=no;


	while(temp!=0)
	{
		dig=temp%10;
		temp /= 10;


		if (dig >= d_Bit)
        {
            d_Bit = dig ;
        }

    }


     printf("\n\n\n======================**************========================\n\n");

     printf("\n Maximum  Digit  is = %d",d_Bit);

     printf("\n\n\n======================**************========================\n\n");

    getch();
    return 0;

}
