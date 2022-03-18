#include<stdio.h>
#include<conio.h>
int DisplayFactor(int iNo)
{
    int iNum=0;

    if(iNo <= 0)
    {
        return 0;
    }
   for(iNum=1;iNum < iNo;iNum++)
   {
       if(iNo%iNum==0 && iNum%2==0)
       {
           printf(" %d ",iNum);
       }
   }
}

int main()
{
    int iValue=0;

    printf("Enter Count :");
    scanf("%d",&iValue);

    DisplayFactor(iValue);

    getch();
    return 0;
}


