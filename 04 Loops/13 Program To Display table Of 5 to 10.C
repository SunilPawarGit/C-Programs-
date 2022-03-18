#include <stdio.h>
#include <conio.h>
int main()
{
	int no=0,nos,res=0;


	printf("Enter Number: ");
	scanf("%d",&no);
	printf("Enter Number : ");
	scanf("%d",&nos);


    printf("\n\n\n======================**************========================\n\n\n");



	if(no<=0 || nos<=0)
	{
		printf("please positive number");
		return -2;
    }

    else if(nos<no)
    {
        printf("less than first number");
    }

    else
    {
        for(int i=1;i<=10;i++)
        {
                printf("\n");

                for(int j=no;j<=nos;j++)
                {
	  	              res=j*i;
                      printf("\t%d",res);
                }

        }

    }

    printf("\n\n\n======================**************========================\n\n\n");




    getch();
    return 0;
}

