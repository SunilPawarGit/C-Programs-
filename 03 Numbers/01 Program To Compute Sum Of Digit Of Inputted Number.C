#include <stdio.h>
#include <conio.h>


int main()
{
	int no=0,dsum = 0,temp,dig;


	printf("Enter number=");
	scanf("%d",&no);


	temp=no;


	while(temp!=0)
	{
		dig=temp%10;
		temp /= 10;
		dsum+=dig;
    }


     printf("\n\n\n======================**************========================\n\n");

     printf("\nSum Of Digit  is = %d",dsum);

     printf("\n\n\n======================**************========================\n\n");

    getch();
    return 0;

}
