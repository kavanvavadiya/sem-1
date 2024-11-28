/* Given a, b, c as input. Print the roots of the quadratic equation ax2 + bx + c = 0.

If roots are real and distinct, print real and distinct.

If roots are real and same, print real and same.

If roots are complex, print complex



Note:

You can use the sqrt(x) library function to get the square root of x.

You can use the abs(x) library function to get the absolute value of x.

Use double to store floating point numbers. */

#include <simplecpp>

main_program
{
    int a,b,c,D;



    cin >> a;   cout << " ";   // taking inputs
    cin >> b;   cout << " ";
    cin >> c;

    D =b*b - 4*a*c;

    if(D>0 && a != 0)
        cout << "real and distinct";
    else if(D<0  && a != 0)
        cout << "complex";
    else
        cout << "real and same";

}
