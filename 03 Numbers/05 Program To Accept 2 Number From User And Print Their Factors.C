#include<stdio.h>
#include<conio.h>
int main()
{
    int iNo = 0,i = 2;
    char ch = '1' ;

    printf("\nEnter Number:");
    scanf("%d",&iNo);

    while(iNo > 1)
    {
        if (iNo % i == 0)
            {
                if(ch == '1')
                {
                    printf(" %d ",i);
                    ch++;
                }
                else
                {
                    printf(" * %d ",i);

                }
                 iNo/=i;
            }
            else
            {
                i++;
            }


    }

    getch();
    return 0;

}
