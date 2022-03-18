#include<stdio.h>
#include<conio.h>

float CalculateBill(int iAmount)
{
    float fBill =0;
    if(iAmount <= 500)
    {
       fBill=iAmount;
        return fBill;
    }
    else if(iAmount > 500 && iAmount <= 1500)
    {

        fBill= iAmount - (iAmount *0.1);
        return fBill;
    }
    else if(iAmount > 1500)
    {
        fBill= iAmount - (iAmount * 0.15);
        return fBill;
    }

}

int main()
{
    int iBill=0;

    printf("Enter Amount :");
    scanf("%d",&iBill);

    printf("\n Bill = %f",CalculateBill(iBill));

    getch();
    return 0;
}
