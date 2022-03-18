#include<stdio.h>
#include<conio.h>

void Display(int iNo)
{
    int iCnt=0;
    while(iCnt < iNo)
    {
        printf(" * ");
        iCnt++;
    }
}
int main()
{
    int iValue=0;

    printf("Enter Number For Printing *.\n");
    scanf("%d",&iValue);

    Display(iValue);

    getch();
    return 0;

}
