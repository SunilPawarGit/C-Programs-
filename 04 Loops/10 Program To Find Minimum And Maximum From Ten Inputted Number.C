#include <stdio.h>
#include <conio.h>


int main()
{
	int no = 0 ,bit = 0 , cnt = 1 , M_bit = 0;  /// M_bit For Minimum.

    printf("Enter Ten  Number For To Find Minimum And Maximum : ");

        scanf("%d",&no);

        M_bit = no ;

        while( cnt <= 9 )
        {




                scanf("%d",&no);


                if (bit <= no)
                {
                    bit = no ;
                }



                if (M_bit >= no)
                {
                    M_bit = no ;
                }



                cnt++;


        }





	printf("\n\n\n======================**************========================\n\n\n");


	printf("\n Entered Number Of Minimum Number  Is = %d \n",M_bit);


	printf("\n Entered Number Of Maximum Number  Is = %d ",bit);

	printf("\n\n\n======================**************========================\n\n");


	getch();
	return 0;
}
