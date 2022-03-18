#include <stdio.h>
#include <conio.h>
long NoLength(int Num);
int main()
{
	long int no1=0,no2=0,temp=0,temp2=0;
	int i,arr[10]={0};



	printf("Enter for No1  =");
	scanf("%ld",&no1);
	printf("Enter for No2  =");
	scanf("%ld",&no2);

   // printf("\n\n==============================================***********************============================================\n\n");


	if(NoLength(no1)!=NoLength(no2))
    {
         printf("\n\n Numbers Length Are Not Match.  \n\n");
	     return -1;
    }


   printf("\n\n==============================================***********************============================================\n\n");


	temp=no1;
	temp2=no2;



	while(temp!=0)
  	{
	  	arr[temp%10]++;
	   	temp/=10;
	  	arr[temp2%10]--;
	   	temp2/=10;
  	}



	for(i=0;i<10;i++)
	{
		if(arr[i]!=0)
	 	{
		 	break;
	 	}
	}


    if(i==10)
    {
        printf("\nNumber Is anagram.");
    }
    else
    {
        printf("\nNumber Is  Not Anagram.");
    }


printf("\n\n==============================================***********************============================================\n\n");


		getch();
		return 0;
}



//                      FUNCTION




long int NoLength(int num)
{
	int len=0;


	  while(num!=0)
      {
            num/=10;
            len++;
      }


		return len;
}
