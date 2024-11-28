/* 	Draw a circle of radius 50 at (200,200). Now by using two-mouse clicks,
draw a line between the points that were clicked on.
Your task is to put a box (square) around the circle with each side touching
the circle in such a way that every side of the box is either parallel (or coincident with) the user-input line or perpendicular to it.


Hint:

To get x and y coordinates of the mouse click, you can use this sample code:

int c = getClick();

int x = c / 65536;

int y = c % 65536; */


#include<simplecpp>


main_program
{
int k1, k2 , x1 ,y1 ,x2 ,y2;
float m;
   initCanvas("program",500,500);
   Circle c(200,200,50);
   k1 = getClick();
   k2 = getClick();
   x1 = k1/65536; y1 = k1%65536;
   x2 = k2/65536; y2 = k2%65536;

   Line l1(x1,y1,x2,y2);
   m = (y2 - y1)*1.0/(x2 - x1);  // slop
   Rectangle r1(200,200,100,100);
   r1.rotate(atan(m));

   wait(100);
}
