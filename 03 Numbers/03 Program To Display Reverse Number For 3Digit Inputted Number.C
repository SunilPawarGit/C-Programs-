#include <stdio.h>
#include <conio.h>
int main()
{
	int no=0,temp=0,dig=0,rev=0;


	printf("Enter number=");
	scanf("%d",&no);


	temp=no;





	while(temp!=0)
	{
		dig=temp%10;
		temp=temp/10;
		rev=(rev*10)+dig;


    }

    printf("\n\n\n======================**************========================\n\n\n");

    printf("\n Inputted Number Reverse Is  : %d ", rev);

    printf("\n\n\n======================**************========================\n\n\n");

    getch();
    return 0;

}
