#include <stdio.h>
#include <conio.h>



int main()
{
	int cnt = 0, Sum =0, No;




    printf("\n Enter 10 Numbers For Addition : ");



	while(cnt<10)
	{
		scanf("%d",&No);
		Sum+=No;
		cnt++;
	}


	printf("\n\n\n======================**************========================\n\n\n");


	printf("\n Sum Of 10 Inputted Number Is : %d",Sum);


	printf("\n\n\n======================**************========================\n\n\n");

    getch();
	return 0;


}
