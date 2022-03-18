#include <stdio.h>
#include <conio.h>
int main()
{
	int a=0,b=1,no,temp;


	printf("Enter Number For Fibonacci Series : ");
	scanf("%d",&no);

    printf("\n\n\n======================**************========================\n\n");

	printf("%d\n%d",a,b);


    while(no>2)
	{


		printf("\n%d",a+b);

		temp=a+b;
		a=b;
		b=temp;
		no--;
    }



    printf("\n\n\n======================**************========================\n\n");


    getch();
	return 0;
}


