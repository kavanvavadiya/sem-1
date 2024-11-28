/*Given an integer n, print n lines where the ith line contains the i numbers separated by space.

The first-line first integer starts from 1 and the rest of the numbers will be previously printed number + 1.*/


#include<simplecpp>

main_program
{
//Write your code here
    int n,i=1,j=1;
    cin >> n;
    repeat(n) //for rows
    {
        repeat(i) // for colmn
        {
            cout << j << " ";

            j++;
        }
        cout << "" <<endl;
        i++;


    }

}

