#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    int rno=0;
    char name[15];
    char course[10];
    char city[10];


   // printf("\n=========********===================");


    printf("\n Enter Roll Number Of Student:");
    scanf("%d",&rno);

    printf("\n Enter Name Of Student:");
    scanf("%s",&name);

    printf("\n Enter Course of Student:");
    scanf("%s",&course);

    printf("\n Enter City of Student:");
    scanf("%s",&city);



    printf("\n\n Display Record=>\n");

    printf("\n\n\n======================**************========================\n\n\n");


    printf("\n Roll Number Of Student :%d.\n Name Of Student : %s. \n Course Of Student : %s.\n City Of Student : %s.",rno,name,course,city);


    printf("\n\n\n======================**************========================\n\n\n");

    getch();
    return 0;

}

