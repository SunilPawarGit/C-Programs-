#include<stdio.h>
#include<conio.h>

int MultNum(int iNo1,int iNo2,int iNo3)
{
    int iAns=0;

    if(iNo1 == 0 )
    {
        iAns = iNo2*iNo3;
        return iAns;
    }
    else if(iNo2 == 0 )
    {
        iAns=iNo1*iNo3;
        return iAns;
    }
    else if(iNo3 == 0 )
    {
        iAns=iNo1*iNo2;
        return iAns;
    }
    else
    {
        iAns=iNo1*iNo2*iNo3;
        return iAns;
    }
}

int main()
{
    int iValue1=0,iValue2=0,iValue3=0;

    printf(" Enter Number :");
    scanf("%d",&iValue1);
    printf(" Enter Number :");
    scanf("%d",&iValue2);
    printf(" Enter Number :");
    scanf("%d",&iValue3);

    printf(" Answer = %d",MultNum(iValue1,iValue2,iValue3));

    getch();
    return 0;
}
