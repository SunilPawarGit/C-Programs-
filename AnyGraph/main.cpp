
#include <tchar.h>
#include <windows.h>
#include<conio.h>
#include<graphics.h>


 int main()
{
    initwindow(800,800);
    for(int i = 0;i<10;i++)
    {

        line(0,0,100,i*100);
        line(0,0,i*100,100);
        line(0,0,i*100,200);
        line(0,0,100,i*200);

        circle(i*20,i*20,i*50);

        delay(100);

   }
    getch();
    return 0;
}

