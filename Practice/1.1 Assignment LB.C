#include<stdio.h>
#include<conio.h>


int Divide(int iNo1,int iNo2)
{
	if(iNo2 <= 0)
	{
		return -1;
	}
	return iNo1/iNo2;
}


int main()
{
	int iValue1=15,iValue2=5;
	int iRet=Divide(iValue1,iValue2);
	printf("Anshwer = %d",iRet);

	getch();
	return 0;

}
