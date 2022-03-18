#include<stdio.h>
#include<conio.h>

int NonFact(int iNo)
{
    int iNum=0;
    int iSum=0;
    int iSum1=0;
    if(iNo <= 0)
    {
        return 0;
    }
   for(iNum = 1;iNum < iNo;iNum++)
   {
       if(iNo%iNum != 0)
       {
            iSum=iSum+iNum;
       }
       if(iNo%iNum == 0)
       {
           iSum1=iSum1+iNum;
       }
   }

   return iSum1-iSum;

}

int main()
{
    int iValue=0;

    printf("Enter Count :");
    scanf("%d",&iValue);

    printf(" %d ",NonFact(iValue));

    getch();
    return 0;
}




