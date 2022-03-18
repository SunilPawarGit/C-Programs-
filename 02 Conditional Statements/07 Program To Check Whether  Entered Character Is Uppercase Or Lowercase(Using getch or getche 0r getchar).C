#include <stdio.h>
#include <conio.h>



int main()
{
     char ch ;

     puts("\n Enter Character : ");
     ch = getchar();

     ///puts("\n Enter Character : ");  ///Done
   ///  gets(&ch);


   printf("\n\n\n======================**************========================\n\n");


    if (ch >= 65  && ch <= 90)

    {
        printf("\n Character Is Uppercase.");
    }

    else if( ch >= 97 && ch <= 122)
    {
        printf("\n Entered Character Is Lowercase .");
    }
    else
    {
        printf("\n Invalid Character. ");
    }


    printf("\n\n\n======================**************========================\n\n");


    return 0;


}
