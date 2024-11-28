/*Draw the 7-circle pattern as shown in the image using Simplecpp Turtle.

Radius of each circle = 20 units..*/
#include <simplecpp>
main_program
{
    int r = 20;
    float k = (2*PI*r)/360;

    turtleSim();
    repeat(6)
    {
        repeat(60)
        {
            forward(k);
            left(1);

        }
        repeat(360)
        {
            forward(k);
            right(1);


        }
    }


    wait(10);

}
