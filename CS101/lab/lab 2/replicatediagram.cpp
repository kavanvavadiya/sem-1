#include<simplecpp>

main_program
{
    turtleSim();
    repeat(3)
    {
        left(120);
        forward(100);
    }
    repeat(2)
    {
        right(90);
        forward(150);
        right(90);
        forward(100);



    }
    left(90);

    wait(10);
}
