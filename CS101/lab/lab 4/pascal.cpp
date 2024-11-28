/* Take a number from the user. Write a program of Pascal s Triangle till that line.

Eg: lets user enter 5 then Pascal s Triangle till line 5 is:

1

1 1

1 2 1

1 3 3 1

1 4 6 4 1 */

#include<simplecpp>

main_program
{
 int rows, coef = 1;

    cin >> rows;

    for(int i = 0; i < rows; i++)
    {

        for(int j = 0; j <= i; j++)
        {
            if (j == 0 || i == 0)
                coef = 1;
            else
                coef = coef*(i-j+1)/j;     // coef = icj = i!/j!(i-j)! = ic(j-1) * (i-j+1)/j;

            cout << coef << " ";
        }
        cout << endl;
    }



}

