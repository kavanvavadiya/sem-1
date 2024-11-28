/*For the given input integer value n.

Print the value of the expression


where the square root operation takes place n times.



Note: Use double for storing your result. */
#include<simplecpp>

main_program
{
//Write your code here
    int n;
    float a=0;
    cin >> n;
    for(int i=1; i<=n; i++)
    {
        float k;

        k=2+a;
        a=sqrt(k);      // To squre root of whole quantity


    }
    cout << fixed;		// uses fixed floating point representation

    cout.precision(2);	// print two digits after the decimal point
    cout << a;
}
