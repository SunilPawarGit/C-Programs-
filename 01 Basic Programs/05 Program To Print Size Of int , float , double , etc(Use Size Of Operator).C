#include<stdio.h>
#include<conio.h>

struct Abc
{
    int no;
    char ch[8];
    float Num;
    double Numb;

}obj;

int main()
{
    int no;
    char *ptr;
    float num;

    printf("\n\n======================================*****************======================================\n\n");


    printf("\n Size Of Integer :%d",sizeof(int));
    printf("\n Size Of Char:%d ",sizeof(char));
    printf("\n Size Of Float :%d",sizeof(float));
    printf("\n Size Of Double :%d",sizeof(double));
    printf("\n Size Of Stucture :%d",sizeof(obj));
    printf("\n Size Of Pointer :%d",sizeof(ptr));

    printf("\n\n\n======================================*****************======================================\n\n");

    getch();
    return 0;

}
