#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct Product
{
	int P_Id;
	char P_name[10];
	float P_sales_price;
	float P_pachase_price;
};

//Main

int main()
{
	  int cnt=0 , k = 0 , j = 0;
	  float Max = 0;
	  struct Product *p_ptr;

	//Accepting Count.

	    printf("Enter count how many Products You Have : ");
	    scanf("%d",&cnt);

  //Dynamic memory Allocation .

      p_ptr=(struct Product*)malloc(cnt*sizeof(struct Product ));

	//Accepting the for product Details.


	  for(int i=0;i<cnt;i++)
	  {


        printf("\nEnter %d product Id:",i+1);
     	scanf("%d",&p_ptr[i].P_Id);


        printf("\nEnter %d product Name:",i+1);
    	scanf("%s",&p_ptr[i].P_name);


	   	printf("\nEnter %d product Sales Price:",i+1);
    	scanf("%f",&p_ptr[i].P_sales_price);


		  printf("\nEnter %d product Parchase Price:",i+1);
     	scanf("%f",&p_ptr[i].P_pachase_price);
	   }


	printf("\n==============********=============\n");


	//Display entered Data

  	    for( j=0;j<cnt;j++)
        {

	       printf("\n Single %d Product Detail Is=>",j+1);
    	   printf("\n Product ID:%d.\nProduct Name:%s.    \nProduct sales Price:%0.2f.\nProduct Purchase Price:%0.2f.",p_ptr[j].P_Id,p_ptr[j].P_name,p_ptr[j].P_sales_price,p_ptr[j].P_pachase_price);

    	   if (Max >= p_ptr[j].P_sales_price);
           {

               k = j;

           }
        }


        printf("\n\n\n Maximum Sales Price Details :");


        {

            printf("\n\n Product ID:%d.\nProduct Name:%s.    \nProduct sales Price:%0.2f.\nProduct Purchase Price:%0.2f.",p_ptr[k].P_Id,p_ptr[k].P_name,p_ptr[k].P_sales_price,p_ptr[k].P_pachase_price);

        }


	printf("\n==============********=============\n");


	getch();
	return 0;
}
