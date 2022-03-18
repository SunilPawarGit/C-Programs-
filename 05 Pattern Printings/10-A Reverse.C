#include <stdio.h>
#include <conio.h>


int main()
{
	int rcnt = 0, ccnt = 0 ;
    char ch = 'A';

	printf("Enter Row=");
	scanf("%d",&rcnt);
	printf("Enter Column=");
	scanf("%d",&ccnt);

	printf("\n\n\n======================**************========================\n\n");

	for(int i=1;i<=rcnt;i++)
	{




		for(int j=1;j<=ccnt;j++)
		{

			if(j == ccnt ||  ( i <= j )  && ( i+j >= rcnt+1 ) )

			{
				printf("\t%c",ch++);
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
