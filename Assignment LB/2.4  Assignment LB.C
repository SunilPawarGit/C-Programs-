#include<stdio.h>
#include<conio.h>

void Display(int iNo,int iFrequency)
{
   for(int iCnt=0;iCnt < iFrequency;iCnt++)
   {
       printf(" %d ",iNo);
   }
}
int main()
{
    int iValue=0;
    int iCount=0;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    printf("Enter Frequency :\n");
    scanf("%d",&iCount);
    Display(iValue,iCount);

    getch();
    return 0;

}

