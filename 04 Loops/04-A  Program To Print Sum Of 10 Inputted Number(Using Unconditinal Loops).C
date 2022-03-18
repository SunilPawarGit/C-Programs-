#include <stdio.h>
#include <conio.h>


int main()
{
	int no = 0 ,bit = 0 , cnt = 1;

    printf("Enter Ten  Number For Addition : ");


	while(1)
	{

		scanf("%d",&no);
		bit=bit+no;

		if(cnt >= 10 )
		{
			break;
		}

		cnt++;

	}

	printf("\n\n\n======================**************========================\n\n\n");


	printf("Addition of Entered Number Is = %d",bit);

	printf("\n\n\n======================**************========================\n\n");


	getch();
	return 0;
}
