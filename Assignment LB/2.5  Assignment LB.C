#include<stdio.h>
#include<conio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0
BOOL ChkEven(int iNo)
{
    if(iNo%2==0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main()
{
    int iValue=0;
    BOOL  bRet=FALSE;

    printf("Enter Number :");
    scanf("%d",&iValue);

    bRet=ChkEven(iValue);

    if (bRet)
    {
        printf("\n %d Number is Even.",iValue);
    }
    else
    {
        printf(" \n %d Number is ODD.",iValue);
    }
    getch();
    return 0;
}
