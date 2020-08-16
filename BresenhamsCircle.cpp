#include <graphics.h>


void circle(int Xc,int Yc,int X,int Y)
{
	putpixel(Y+Xc , X+Yc,RED );        //Octet-1
	putpixel(X+Xc , Y+Yc,RED) ;       //Octet-2 
	putpixel(-X+Xc , Y+Yc,RED);      //Octet-3
	putpixel(-Y+Xc , X+Yc,RED);     //Octet-4
	putpixel(-Y+Xc , -X+Yc,RED);    //Octet-5
	putpixel(-X+Xc , -Y+Yc,RED);    //Octet-6
	putpixel(X+Xc , -Y+Yc,RED);    //Octet-7
	putpixel(Y+Xc , -X+Yc,RED);	//Octet-8
}
int main()
{
	int g = DETECT,gm;
	initgraph(&g,&gm,NULL);
	int Radius = 20;//in cm
	int X=0;//point to be plotted
	int Y=Radius;
	
	int D = 3-2*Radius; //initial decision parameter
	while(X!=Y)
	{
		circle(200,200,X,Y);//we are considering center at 200,200
		if(D<0)
		{
			D = D + 4*X + 6;
                	X=X+1;
               		Y=Y;	
		}

		else
		{
			D=D+4*(X-Y)+10;
                  	X=X+1;
                 	Y=Y-1;
		}
	

	}

closegraph();
return 1;
}
