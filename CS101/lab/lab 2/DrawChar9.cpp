/*Draw the character 9 using TurtleSim. The final pointer should land up in the right-center of the number 9.

A size is to be taken as user input . The character should then be drawn with line segments (of input size) at right angles only.*/

#include<simplecpp>

main_program
{
    int k;
    cin >> k;
    turtleSim();
    forward(k);
    left(90);
    forward(2*k);
    left(90);
    forward(k);
    left(90);
    forward(k);
    left(90);
    forward(k);

    wait(10);
}
