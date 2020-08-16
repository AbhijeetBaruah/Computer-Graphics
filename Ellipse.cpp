#include <graphics.h>

int main()
{
	int g = DETECT,gm,Xc = 200,Yc = 200,rx = 20, ry = 30;
	float x,y;
	initgraph(&g,&gm,NULL);
	x = 0;
	y = ry;
	float dx = 2 * ry * ry * x;
	float dy = 2 * rx * rx * y;
	
	float p1 =  (ry * ry) - (rx * rx * ry)+(0.25 * rx * rx);

	while( dx < dy ) //region 1
	{
		
		putpixel(Xc + x, Yc + y, RED);
		putpixel(Xc - x, Yc + y, RED);
		putpixel(Xc - x, Yc - y, RED);
		putpixel(Xc + x, Yc - y, RED);
		x++;
		if(p1<0)
		{	
			dx = 2 * ry * ry * x;
			//dy = 2 * rx * rx * y
			p1 = p1 + 2 * ry * ry * x + (ry * ry);
		}
		else{
			y--;
			dx = 2 * ry * ry * x; 
            		dy = 2 * rx * rx * y; 
            		p1 = p1 + 2 * ry * ry * x -2 * rx * rx * y + ry*ry;
		}

        }

	float p2 = ((ry * ry) * ((x + 0.5) * (x + 0.5)))+((rx * rx) * ((y - 1) * (y - 1)))-(rx * rx * ry * ry);
	while( y >= 0)//region2
	{
		
		putpixel(Xc + x, Yc + y, RED);
        	putpixel(Xc - x, Yc + y, RED);
	        putpixel(Xc - x, Yc - y, RED);
        	putpixel(Xc + x, Yc - y, RED);
		//delay(500);
		y--;
		if(p2 < 0)
		{
			
			x++; 
            		dx = (2 * ry * ry * x); 
            		dy = (2 * rx * rx * y); 
            		p2 = p2 + dx - dy + (rx * rx);
			
 		}
		else
		{
			 
            		dy = (2 * rx * rx * y); 
            		p2 = p2 + (rx * rx) - dy;
			  
		}
	}
	
getch();
return 0;
}
        
