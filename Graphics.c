
#include <stdio.h>
#include <graphics.h>
int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm," ");
	
	
	setcolor(blue);
	
	
	circle(25,25,30);
	
	getch();
	closegraph();
	
	
}
