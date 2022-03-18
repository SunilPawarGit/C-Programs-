

#include <stdio.h>
#include <conio.h>



int main()
{
    char ch = '\0' ;

    printf("\n Choose  A To D Character : ");
    scanf("%c",&ch);


    printf("\n\n\n======================**************========================\n\n");


    switch (ch)
    {
        case 'A':
        case 'a':

                    {
                        printf("\n\t\t\t Welcome. ");
                        break;
                    }


        case 'B' :
        case 'b' :

                    {
                        printf("\n\t\t\t Good Day.");
                        break;

                    }
        case 'C' :
        case 'c' :

                    {
                        printf("\n\t\t\t Have a Nice Day.");
                        break;
                    }
        case 'D' :
        case 'd' :

                    {
                        printf("\n\t\t\t Good Bye.");
                        break;
                    }

        default :

                    {
                        printf("\n\t\t\t Bye Bye.");
                        break;
                    }



    }


    printf("\n\n\n======================**************========================\n\n");

    getch();
    return 0;

}
