/*You are given coefficients of a quadratic equation of the form ax2 + bx +c and N number of queries. In each query,
 the root of the polynomial, i.e x will be the input and you have to print the value of the polynomial.



Note: This question has a different number of x values (based on the value of n) for each test case.
 You can read one x, print the value of the polynomial, and then read the next x.*/

#include<simplecpp>

main_program
{
    int n,a,b,c,x,k;
    cin >> n >> a >> b >> c;
    cout << "\n";
    repeat(n)
    {
        cin >> x;
        k=(a*x*x)+(b*x)+c;
        cout << k <<endl;
    }
}

