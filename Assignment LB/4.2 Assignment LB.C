#include<stdio.h>
#include<conio.h>

float IncomeTax(int iAmount)
{
    float fBill =0;
    float fAmt=0;
    float fFirst =0;
    float fSecond=0;
    if(iAmount < 0)
    {
        printf("Invalid Amount.");
        return 0;
    }
    if(iAmount <= 500000)
    {

        return fBill;
    }
    else if(iAmount > 500000 && iAmount <= 1000000)
    {
        fAmt=iAmount-500000;

        fFirst= (fAmt * 0.1);

        return fFirst;
    }
    else if(iAmount > 1000000 && iAmount <= 2000000)
    {
        fAmt=iAmount-1000000;
        fAmt=fAmt*0.2;
        fSecond=500000;
        fSecond=fSecond*0.1;
        fBill=fAmt+fSecond;

        return fBill;
    }
    else if(iAmount > 2000000)
    {
        fAmt=iAmount-2000000;
        fAmt=fAmt*0.3;
        fSecond=2000000-1000000;
        fSecond=fSecond*0.2;
        fFirst=500000;
        fFirst=fFirst*0.1;

        fBill=fFirst+fSecond+fAmt;
        return fBill;
    }

}

int main()
{
    int iBill=0;

    printf("Enter Amount :");
    scanf("%d",&iBill);

    printf("\n Bill = %f",IncomeTax(iBill));

    getch();
    return 0;
}
