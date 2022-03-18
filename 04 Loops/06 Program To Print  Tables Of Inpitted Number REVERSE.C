#include <stdio.h>
#include <conio.h>
int main()
{
	int no=0,res=0;


	printf("Enter Number: ");
	scanf("%d",&no);


    printf("\n\n\n======================**************========================\n\n\n");



	if(no<=0)
	{
		printf(" Please Enter positive number");
		return -2;
    }


    else
    {
        for(int i=10;i>=1;i--)
        {


                res=no*i;
                printf("\n%d",res);


        }

    }

    printf("\n\n\n======================**************========================\n\n\n");




    getch();
    return 0;
}


