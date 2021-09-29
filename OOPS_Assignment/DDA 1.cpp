//============================================================================
// Name        : DDA.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description :// DDA Line Bresenhams
//============================================================================

#include <iostream>
#include<graphics.h>
using namespace std;

//Function for finding absolute value
int abs (int n)
{
    return ( (n>0) ? n : ( n * (-1)));
}

//DDA Function for line generation
void DDA(int X0, int Y0, int X1, int Y1)//
{
    // calculate dx & dy
    int dx = X1 - X0;
    int dy = Y1 - Y0;

    // calculate steps required for generating pixels
    int steps = abs(dx) > abs(dy) ? abs(dx) : abs(dy);

    // calculate increment in x & y for each steps
    int Xinc = dx / (int) steps;
    int Yinc = dy / (int) steps;

    // Put pixel for each step
    int X = X0;
    int Y = Y0;
    for (int i = 0; i <= steps; i++)
    {
        putpixel (X,Y,WHITE);  // put pixel at (X,Y)
        X += Xinc;           // increment in x at each step
        Y += Yinc;           // increment in y at each step
        delay(200);          // for visualization of line-
                             // generation step by step
    }
}
void bresenhams(int x0, int y0, int x1, int y1)
{
    int dx, dy, p, x, y;

dx=x1-x0; // dx
dy=y1-y0; //dy

x=x0; // first coordinate
y=y0;

p=2*dy-dx; // decision parameter Pk

while(x<x1)
{
if(p>=0) // Pk>=0; x=x+1,y=y+1
{
putpixel(x,y,WHITE);
y=y+1;
p=p+2*dy-2*dx; // new decision parameter pk+2dy-2dx
}
else // Pk<0 x=x+1,y=y
{
putpixel(x,y,WHITE);
p=p+2*dy; //new descision parameter is pk+2dy
}
x=x+1;
}
delay(2000);
}


// Driver program
int main()
{
    int gd = DETECT, gm;

    // Initialize graphics function
    initgraph (&gd, &gm, "");
    int X0 = 200, Y0 = 200, X1 = 140, Y1 = 160;
     //DDA(X0, Y0, X1, Y1);//func call
   bresenhams(10, 10, 250, 250);
    return 0;
}
