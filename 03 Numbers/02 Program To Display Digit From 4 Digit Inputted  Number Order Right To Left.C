#include <stdio.h>
#include <conio.h>
int main()
{
	int no=0,temp=0,dig=0,rev=0;


	printf("Enter number=");
	scanf("%d",&no);


	temp=no;

    printf("\n Inputted Number Order Digits Right To Left. ");



	while(temp!=0)
	{
		dig=temp%10;
		temp=temp/10;
		rev=(rev*10)+dig;
		printf(" %d ", dig);

    }

   // printf("\n Inputted Number Order Right To Left : %d ", rev);

    getch();
    return 0;

}
