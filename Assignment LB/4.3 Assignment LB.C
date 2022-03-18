#include<stdio.h>
#include<conio.h>

int Standard(int iStand)
{
    int iArr[4]={8900,12790,21000,23450};

    switch(iStand)
    {
    case 1:
        {
            return iArr[0];
            break;
        }
    case 2:
        {
            return iArr[1];
            break;
        }
    case 3:
        {
            return iArr[2];
            break;
        }
    case 4:
        {
            return iArr[3];
            break;
        }
    default :
        {
            printf("Invalid Input.");
          return 0;
        }

    }
}

int main()
{
    int iStd=0;

    printf("Enter Standard :");
    scanf("%d",&iStd);

    printf("\n Fees = %d",Standard(iStd));

    getch();
    return 0;
}
