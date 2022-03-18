#include<stdio.h>
#include<conio.h>

int MultFactor(int iNo)
{
    int iNum=0;
    int iAns=1;
    if(iNo <= 0)
    {
        return 0;
    }
   for(iNum=1;iNum < iNo;iNum++)
   {
       if(iNo%iNum==0)
       {
           iAns=iAns * iNum;
       }
   }
   return iAns;
}

int main()
{
    int iValue=0;

    printf("Enter Count :");
    scanf("%d",&iValue);

    printf(" \n %d ",MultFactor(iValue));

    getch();
    return 0;
}


