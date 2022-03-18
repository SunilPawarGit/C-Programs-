
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    int rno=0;
    char name[15];
    char course[10];
    char city[10];





    printf("\n Enter Roll Number Of Student:");
    scanf("%d",&rno);

    printf("\n Enter Name Of Student:");
    scanf("%s",&name);

    printf("\n Enter Course of Student:");
    scanf("%s",&course);

    printf("\n Enter City of Student:");
    scanf("%s",&city);


    printf("\n\n=========********===================\n\n");

    printf("\n\n Display Record=>\n\n");


    printf("\n\n Roll Number Of Student is :%d",rno);
    printf("\n\n Name Of Student is :%s",name);
    printf("\n\n course Of Student is :%s",course);
    printf("\n\n city  Of Student is :%s",city);


     printf("\n\n\n=========********===================");


    getch();
    return 0;

}

