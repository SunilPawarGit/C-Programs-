#include <stdio.h>
#include <conio.h>

int  prime(int );
int main()
{
	int ino=0;
	printf("\n Enter Number :");
	scanf("%d",&ino);

	printf("\n\n=====================************=========================\n\n");

    if(prime(ino)==2)
    {
        printf("\n Number is prime.");
    }
    else
    {
        printf("\n Number Is Not Prime.");
    }

    printf("\n\n\n=====================************=========================\n\n");

	getch();
	return 0;

}


int  prime(int Num)
{
    int Cnt=0;


    for(int i=1;i<=Num;i++)
    {
        if(Num%i==0)
        {
            Cnt++;
        }
    }

	return Cnt;
}



