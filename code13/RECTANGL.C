//program for rectangle(graphics)
#include<stdio.h>
#include<graphics.h>
#include<math.h>
#include<conio.h>
void main()
{int gd=DETECT,gm;
initgraph(&gd,&gm,"C:TURBOC3\\BGI");
clrscr();
rectangle(100,100,200,200);
getch();
closegraph();
}
