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


	struct Product pro;

	/// Accept Info.

	printf("\nEnter product Id:");
	scanf("%d",&pro.P_Id);
	printf("\nEnter product Name:");
	scanf("%s",&pro.P_name);
	printf("\nEnter product sales Price:");
	scanf("%f",&pro.P_sales_price);
	printf("\nEnter product purchase Price:");
	scanf("%f",&pro.P_pachase_price);


	/// Display Info

	printf("\nSingle Product Detail Is=>");
	printf("\nProduct ID:%d.\nProduct Name:%s.\nProduct sales Price:%f.\nProduct Purchase Price:%f.",pro.P_Id,pro.P_name,pro.P_sales_price,pro.P_pachase_price);




	getch();
	return 0;
}



