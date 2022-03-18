#include <stdio.h>
#include <conio.h>



int main()
{
     char ch ;


     puts("\n Enter Character : ");

    /// ch = getch();               ///DONE

     ch = getche();

     ///ch = getchar();            ///DONE


     ///gets(&ch);                 ///DONE


       printf("\n\n\n======================**************========================\n\n");


    if (ch >= 65  && ch <= 90)

    {
        printf("\n Entered Is Character Is Uppercase.");
    }


    else if( ch >= 97 && ch <= 122)
    {
        printf("\n Entered Character Is Lowercase .");
    }


    else if ( ch >= 48 && ch <= 57)
    {
        printf("\n Entered Character Is DIGIT. ");
    }


    else
    {
        printf("\n Entered Character Is SYMBOL.");
    }


      printf("\n\n\n======================**************========================\n\n");


    return 0;


}
