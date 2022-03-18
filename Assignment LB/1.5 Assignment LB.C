#include<stdio.h>
#include<conio.h>


void Accept(int iNo)
{
    for(int iCnt=0;iCnt< iNo;iCnt++)
    {
        printf("*");
    }
}

int main()
{
    int iValue=5;

    Accept(iValue);

    getch();
    return 0;
}

