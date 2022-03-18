#include <stdio.h>
#include <conio.h>

int  prime(int );
int main()
{
	int ino = 0 , Dig = 0 ,D_sum = 0 , temp = 0 , Cnt = 0;
	printf("\n Enter Number :");
	scanf("%d",&ino);

	temp = ino ;

	printf("\n\n=====================************=========================\n\n");

    if(prime(ino)==2)
    {


       while (temp != 0)
       {

            Dig = temp % 10;
            temp/=10;
            D_sum +=Dig ;

            if (prime(Dig) == 2 && prime(D_sum) ==2)
            {
                Cnt++;

            }


       }



            if (Cnt == 2)
            {
                printf("\n  %d Number is Super Prime.",ino);
            }

            else
            {
                printf("\n %d Number is Only Prime.",ino);
            }



    }



    else
    {
        printf("\n %d Number Is Not Prime.",ino);
    }



    printf("\n\n\n=====================************=========================\n\n");

	getch();
	return 0;

}


          ///          FUNCTION




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




