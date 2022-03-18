#include<stdio.h>
#include<conio.h>
int PrintEven(int iNo)
{
    int iNum=1;

    if(iNo <= 0)
    {
        return 0;
    }
    while(iNo > 0)
    {
        if(iNum%2==0)
        {
            printf(" %d ",iNum);
            iNo--;
        }

    iNum++;
    }
}

int main()
{
    int iValue=0;

    printf("Enter Count :");
    scanf("%d",&iValue);

    PrintEven(iValue);

    getch();
    return 0;
}
