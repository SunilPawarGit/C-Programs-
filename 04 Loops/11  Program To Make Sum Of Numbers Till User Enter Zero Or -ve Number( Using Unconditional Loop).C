#include <stdio.h>
#include <conio.h>


int main()
{
	int no= 0 ,bit=0;

    printf("Enter number : ");

	while(1)
	{

		scanf("%d",&no);
		bit=bit+no;

		if(no<=0)
		{
			break;
		}

	}

	printf("\n\n\n======================**************========================\n\n\n");


	printf("Addition of Entered Numbers Is = %d",bit);

	printf("\n\n\n======================**************========================\n\n");


	getch();
	return 0;


}
