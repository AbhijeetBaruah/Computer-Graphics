
#include <graphics.h>

int main()
{
	int gd = DETECT, gm, color;
	initgraph(&gd,&gm,NULL);
	putpixel(50,50,GREEN);
	putpixel(50,60,RED);
	getch();
	closegraph();
return 0;
}

