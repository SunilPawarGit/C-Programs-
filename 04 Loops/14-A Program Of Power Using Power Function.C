#include <stdio.h>
#include <conio.h>

long int power(int no1,int no2);


int main()
{

	int no1=0,no2=0,no3=0;
	long int result=0,num=1;



    printf("Enter Number For Base = ");
    scanf("%d",&no1);

    printf("Enter Number For Exponent = ");
	scanf("%d",&no2);

    printf("Enter Number For That Exponent = ");
	scanf("%d",&no3);




	//printf("Power of two Number is =  %ld ",power(no1, no2));

     printf("\n\n\n======================**************========================\n\n");

   //  result=power(no1, no2);
     //for(int i=1;i<=no3;i++)
   //  {

     //   num=num*result;

   //  }
    // printf("\n Power Of Power  is = %ld ",num);


    printf("\n Power Of (%d ^ %d)^ %d  is = %ld ",no1,no2,no3,power(power(no1,no2),no3));


    printf("\n\n\n======================**************========================\n\n\n");


    getch();
    return 0;

}

// Function

long int power( int no1,int no2)
{
    int res=1;


    while(no2>0)
    {

         res=res*no1;
         no2--;

    }

    return res;

}

