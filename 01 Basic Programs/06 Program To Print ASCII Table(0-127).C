#include<stdio.h>
#include<conio.h>

int main()
{


    int no=0;
    printf("\n ASCII Table Is =>");


    while(no<128)
    {

        printf("\n\t%d \t ASCII Value => \t %c",no,no);
        no++;
    }



    getch();
    return 0;

}
