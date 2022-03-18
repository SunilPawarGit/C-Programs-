#include<stdio.h>
#include<conio.h>

void Display()
{
	int i=5;

	while(i > 0)
	{
		printf("\n %d",i);
		i--;
	}
}

int main()
{
	Display();

	getch();
	return 0;
}
