#include<stdio.h>
#include<conio.h>
int main()
{
    int iNo = 0,i = 2, J=0;
    char ch = '1' ;

    printf("\nEnter Number:");
    scanf("%d",&iNo);

    printf("\nEnter Number:");
    scanf("%d",&J);

    while(1)
    {
        if (iNo % i == 0 || J %i == 0)
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
                 J/=i;
            }
            else
            {
                i++;
            }

            if (i ==iNo && i== J)
            {
                break;
            }


    }

    getch();
    return 0;

}
