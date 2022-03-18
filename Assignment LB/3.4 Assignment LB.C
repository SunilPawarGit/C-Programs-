#include<stdio.h>
#include<conio.h>

void CharConv(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
    {
        ch=ch+32;
        printf(" %c ",ch);
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        ch=ch-32;
        printf(" %c ",ch);
    }
    else
    {
        printf("Invalid Character.");
    }
}

int main()
{
    char cValue='\0';

    printf("Enter Character :");
    scanf("%c",&cValue);

    CharConv(cValue);

    getch();
    return 0;

}
