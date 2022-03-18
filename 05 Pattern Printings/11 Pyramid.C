#include <stdio.h>
#include <conio.h>


int main()
{
	int rcnt = 0, ccnt = 0 ;
    char ch = 'A';

	printf("Enter Row=");
	scanf("%d",&rcnt);

	printf("\n\n\n======================**************========================\n\n");

	for(int i=1;i<=rcnt;i++)
	{
		for(int j=1;j<=rcnt;j++)
		{

			if(( i >= j )   && ( i+j >= rcnt+1 )  )

			{
				printf("\t *");
            }
            else
            {
                printf(" \t");
            }
		}
        printf("\n\n\n");
    }
    printf("\n\n\n======================**************========================\n\n");


    getch();
    return 0;


}

