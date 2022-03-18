#include <stdio.h>
#include <conio.h>
int main()
{
	int rcnt  = 0,ccnt = 0;


	printf("Enter Row = ");
	scanf("%d",&rcnt);
	printf("Enter Column =  ");
	scanf("%d",&ccnt);



	printf("\n\n======================**************========================\n\n\n\n");



	for(int i=1;i<=rcnt;i++)
	{
		for(int j=1;j<=ccnt;j++)
		{
			if( i==1 || i+j==rcnt+1 || j==1 )
			{
				printf("\t*");

            }
            else
            {
                printf("\t ");
            }
        }
        printf("\n\n\n");
    }


    printf("\n\n\n======================**************========================\n\n");


    getch();
    return 0;
}
