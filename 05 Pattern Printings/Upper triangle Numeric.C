#include <stdio.h>
#include <conio.h>


int main()
{
	int rcnt = 0,ccnt = 0;


	printf("Enter Row=");
	scanf("%d",&rcnt);
	printf("Enter Column=");
	scanf("%d",&ccnt);



	printf("\n\n\n======================**************========================\n\n");


	for(int i=1;i<=rcnt;i++)
	{
		for(int j=1;j<=ccnt;j++)
		{
			if(i==j||i<=j)
			{
		     printf("\t%d",(i+j)*2);

            }
            else
            {
                printf(" \t");
            }
        }
        printf("\n\n");
    }



    printf("\n\n\n======================**************========================\n\n");


    getch();
    return 0;

}
