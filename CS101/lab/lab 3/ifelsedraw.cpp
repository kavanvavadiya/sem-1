/* Given an input integer n. If n is even, draw an equilateral triangle of side length 100 units.
 If n is odd, draw a square of side length 100 units. (Use Turtle). The final orientation of the turtle doesn t matter. */


#include<simplecpp>


main_program
{
    int n;
    cin >> n;
    if(n%2==0)
    {
        turtleSim();
        repeat(3)      // equilateral triangle
        {
            forward(100);
            left(120);
        }
    }
    else
    {
        turtleSim();
        repeat(4)      // square
        {
            forward(100);
            left(90);
        }
    }
    wait(100);
}
