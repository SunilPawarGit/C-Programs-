#include<stdio.h>
#include<conio.h>

int main()
{


    int No1 = 0,No2 = 0,Temp = 0;



    printf("Enter  Number For Swapping : ");
    scanf("%d",&No1);
    printf("Enter  Number For Swapping : ");
    scanf("%d",&No2);

    printf("\n\n==============================*****************==================================\n\n");

    printf("\n Before Swapping Number :\n\n %d  %d  ",No1,No2);

    Temp = No1;
    No1 = No2;
    No2 = Temp ;

    printf("\n\n\n After Swapping Number : \n\n %d  %d  ",No1,No2);

    printf("\n\n\n==============================*****************==================================\n\n");

    getch();
    return 0;


}
