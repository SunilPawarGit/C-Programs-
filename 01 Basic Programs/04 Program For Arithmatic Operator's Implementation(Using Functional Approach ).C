#include<stdio.h>
#include<conio.h>
// For Addition

int Add(int Num1, int Num2)
{
    return Num1+Num2;
}

//For Substraction

int Sub(int Num1, int Num2)
{
    return Num1-Num2;
}

//For Multiplication
int Mult(int Num1, int Num2)
{
    return Num1*Num2;
}

//For Division
float Division(int Num1,int Num2)
{
    return Num1/Num2;
}


int main()
{
    int No1=0,No2 =0;

    printf("Enter Two Number :");
    scanf("%d",&No1);
    scanf("%d",&No2);

    printf("\n Addition Of Two Number =%d",Add(No1,No2));

    printf("\n\nEnter Two Number :");
    scanf("%d",&No1);
    scanf("%d",&No2);

    printf("\n Substraction Of Two Number =%d",Sub(No1,No2));

    printf("\n\nEnter Two Number :");
    scanf("%d",&No1);
    scanf("%d",&No2);

    printf("\n Multiplication Of Two Number =%d",Mult(No1,No2));

    printf("\n\nEnter Two Number :");
    scanf("%d",&No1);
    scanf("%d",&No2);

    printf("\n Division Of Two Number =%0.2f",Division(No1,No2));

    getch();
    return 0;


}
