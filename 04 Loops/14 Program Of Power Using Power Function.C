#include <stdio.h>
#include <conio.h>

double power(int x,int y);

int main()
{


	int x,y,result=1;


	printf("Enter Number For Base =");
	scanf("%d",&x);
	printf("Enter Number For Exponent =");
	scanf("%d",&y);


	if(x<=0 || x<=0)
	{
		printf("invalid input");
		return -1;
    }
    else
    {

        printf("x res to y=%f", power(x, y));
    }


    getch();

    return 0;
}

/// Function Of Power


double power(int x,int y)
{
    int res=1;

    for(int i=1;i<=y;i++)
    {
        res=res*x;
    }
    return(res);

}
