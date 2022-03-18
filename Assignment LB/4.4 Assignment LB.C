#include<stdio.h>
#include<conio.h>

int TouristBill(int Kilomtr)
{
    int iBill=0;
    if(Kilomtr <= 100)
    {
        iBill=Kilomtr * 25;
        return iBill;

    }
    else if (Kilomtr > 100)
    {
        int iTemp= Kilomtr-100;
        iTemp=iTemp*15;
        iBill= 100 *25;
        return iTemp+iBill;
    }

}

int main()
{
    int iKilomtr=0;

    printf("\n Enter Kilometer :");
    scanf("%d",&iKilomtr);

    printf("\n Bill = %d",TouristBill(iKilomtr));

    getch();
    return 0;

}
