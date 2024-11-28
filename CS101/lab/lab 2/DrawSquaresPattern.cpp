/*Draw a large square of size n with smaller squares of size d at each vertex using turtle.
The final pointer should be at the top right corner of the main square facing rightwards.

Size n of large square is to be taken as user input.

Size d of small squares is fixed: 5 units */

#include<simplecpp>

main_program
{
    int n,d=5;
    cin >> n;
    turtleSim();
    repeat(4)
    {
        forward(d/2);
        repeat(4)
        {
            left(90);
            forward(d);

        }
        forward(-d/2);
        right(90);
        forward(n);


    }
    wait(10);
}
