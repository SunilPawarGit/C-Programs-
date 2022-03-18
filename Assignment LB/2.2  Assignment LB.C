
#include<stdio.h>
#include<conio.h>

#include<stdio.h>
#include<conio.h>

void Display(int iNo)
{

    while(iNo > 0)
    {
        printf(" * ");
        iNo--;
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
