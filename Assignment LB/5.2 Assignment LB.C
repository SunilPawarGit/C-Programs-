#include<stdio.h>
#include<conio.h>

int FactRev(int iNo)
{
    int iNum=0;

    if(iNo <= 0)
    {
        return 0;
    }
   for(iNum = iNo/2 ;iNum > 0;iNum--)
   {
       if(iNo%iNum==0)
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

    FactRev(iValue);

    getch();
    return 0;
}


