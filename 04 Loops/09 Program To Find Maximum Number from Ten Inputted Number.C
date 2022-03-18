#include <stdio.h>
#include <conio.h>


int main()
{
	int no = 0 ,bit = 0 , cnt = 1;

    printf("\n Enter Ten  Number For To Find Minimum And Maximum : ");


	while(cnt <= 10)
	{

		scanf("%d",&no);

		if ( no < 0)

        {
            break;
        }

		if (bit <= no)
        {
           bit = no ;
        }


		cnt++;

	}

	printf("\n\n\n======================**************========================\n\n\n");


	printf(" \n Entered Number Of Maximum Number  Is = %d ",bit);

	printf("\n\n\n======================**************========================\n\n");


	getch();
	return 0;
}
