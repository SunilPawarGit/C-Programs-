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



int main()
{
	struct Product Pro_Arr[3];


	for(int i=0;i<3;i++)
	{


			printf("\nEnter %d product Id:",i+1);
            scanf("%d",&Pro_Arr[i].P_Id);


			printf("\nEnter %d product Name:",i+1);
            scanf("%s",&Pro_Arr[i].P_name);


            printf("\nEnter %d product Sales Price:",i+1);
            scanf("%f",&Pro_Arr[i].P_sales_price);


            printf("\nEnter %d product Parchase Price:",i+1);
            scanf("%f",&Pro_Arr[i].P_pachase_price);
	}



      printf("\n\n\n======================**************========================\n\n\n");

  	  for(int j=0;j<3;j++)
	  {

	       printf("\nSingle %d Product Detail Is=>",j+1);
           printf("\nProduct ID:%d.\nProduct Name:%s.    \nProduct sales Price:%0.2f.\nProduct Parchase Price:%0.2f.",Pro_Arr[j].P_Id,Pro_Arr[j].P_name,Pro_Arr[j].P_sales_price,Pro_Arr[j].P_pachase_price);
      }

       printf("\n\n\n======================**************========================\n\n\n");

	getch();
	return 0;
}
