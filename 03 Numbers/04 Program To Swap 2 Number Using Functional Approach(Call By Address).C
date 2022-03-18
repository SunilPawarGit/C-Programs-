#include<stdio.h>
#include<conio.h>


///Swap Function


int  Swap(int *Num1 ,int *Num2)
{
    int temp = 0;
    temp = *Num1;
    *Num1 = *Num2 ;
    *Num2 =  temp;
}


int main()
{


    int No1 = 0,No2 = 0,Temp = 0;



    printf("Enter  Number For Swapping : ");
    scanf("%d",&No1);
    printf("Enter  Number For Swapping : ");
    scanf("%d",&No2);

    printf("\n\n==============================*****************==================================\n\n");

    printf("\n Before Swapping Number :\n\n %d  %d  ",No1,No2);


    Swap(&No1 ,&No2); /// Call By Address

    printf("\n\n\n After Swapping Number : \n\n %d  %d  ",No1,No2);

    printf("\n\n\n==============================*****************==================================\n\n");

    getch();
    return 0;


}




