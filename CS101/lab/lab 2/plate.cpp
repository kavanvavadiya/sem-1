/*Replicate the plate border pattern shown in the sample.*/


#include <simplecpp>
main_program
{
    turtleSim();
    float n=20,m=270;

    repeat(n)
    {


        repeat(m)
        {
            forward(0.1);
            left(270/m);
        }
        forward(26);

        repeat(m)
        {
            forward(0.1);
            right(270/m);

        }
        left(360/n);
        forward(26);
    }
    penUp();
     repeat(12)
    {


        repeat(m)
        {
            forward(0.1);
            left(270/m);
        }
        forward(26);

        repeat(m)
        {
            forward(0.1);
            right(270/m);

        }
        left(360/n);
        forward(26);
    }
right(180);


    wait(5);

}
