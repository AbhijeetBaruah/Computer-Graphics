#include<stdio.h>
#include<graphics.h>
 
//DDA Function for line generation
void DDA(int X0, int Y0, int X1, int Y1)
{
    // calculate dx & dy
    int dx = X1 - X0;
    int dy = Y1 - Y0;
    int steps;
    // calculate steps required for generating pixels
    if(abs(dx) > abs(dy))
        steps = abs(dx);
    else
        steps = abs(dy);
   
 
    // calculate increment in x & y for each steps
    float Xincrement = dx / (float) steps;
    float Yincrement = dy / (float) steps;
 
    // Put pixel for each step
    float X = X0;
    float Y = Y0;
    for (int i = 0; i <= steps; i++)
    {
        putpixel (X,Y,RED);  // put pixel at (X,Y)
        X += Xincrement;           // increment in x at each step
        Y += Yincrement;           // increment in y at each step
        delay(100);          // for visualization of line-                      // generation step by step
    }
}
 
// Driver program
int main()
{
    int gd = DETECT, gm;
 
    // Initialize graphics function
    initgraph (&gd, &gm, NULL);    
 
    DDA(20, 20, 100, 100);
        delay(2000);
        return 0;
    }

