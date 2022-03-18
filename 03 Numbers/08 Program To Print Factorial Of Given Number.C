#include <stdio.h>
#include <conio.h>
int main()
{
	int No=0,Fact = 1;
	printf("Enter number = ");
	scanf("%d",&No);

	for(int i = 1;i<=No;i++)
	{
        Fact*=i;
	}

    printf("\n\n\n======================**************========================\n\n");

	printf("\n Factorial Is : %d ",Fact);

    printf("\n\n\n======================**************========================\n\n");

	getch();
	return 0;

}

