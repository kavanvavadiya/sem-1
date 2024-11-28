/*Given an integer n, print the below pattern for n times.

As an example, for n=3 the output be as follows:

* * *

 * *

* * *

 * *

* * *

 * *
*/

#include<simplecpp>

main_program
{
    int n;
    cin >> n;
    repeat(n)
    {
        repeat(n-1)
        {
            cout << "* ";
        }
        cout << "*" <<endl;
        repeat(n-1)
        {
            cout << " *";
        }
        cout << " " <<endl;

    }
}


