#include<graphics.h>

int main()
{
	int g=DETECT, gm,radius = 20,Xc = 200,Yc=200;
	initgraph(&g, &gm, NULL);
	int x = radius, y =0; // initial start points
	int p = 5/4 - radius;
	while(x >= y)
	{
		putpixel(Xc + x, Yc + y, RED);
		putpixel(Xc + y, Yc + x, RED);
		putpixel(Xc - y, Yc + x, RED);
		putpixel(Xc - x, Yc + y, RED);
		putpixel(Xc - x, Yc - y, RED);
		putpixel(Xc - y, Yc - x, RED);
		putpixel(Xc + y, Yc - x, RED);
		putpixel(Xc + x, Yc - y, RED);
		
		y +=1;
		if(p<=0) //inside
		{
			p += 2*y +1;
		}
		else
		{	
			x = x-1;
			p += 2*(y-x) +1;
		}
}
getch();
return 0;
}		
	
 		
