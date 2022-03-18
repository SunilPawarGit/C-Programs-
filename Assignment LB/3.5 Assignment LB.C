#include<stdio.h>
#include<conio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkVowel(char ch)
{
    if(ch == 'A' || ch == 'a' || ch == 'e' ||ch == 'E' || ch == 'I' || ch == 'i' || ch == 'O' || ch == 'o' || ch == 'u' ||ch == 'U' )
    {
       return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue='\0';
BOOL bRet =FALSE;
    printf("Enter Character :");
    scanf("%c",&cValue);

    if(ChkVowel(cValue))
    {
        printf(" %c Character IS Vowel.",cValue);
    }
    else
    {
        printf("%c Character Is Not Vowel.",cValue);
    }


    getch();
    return 0;

}

