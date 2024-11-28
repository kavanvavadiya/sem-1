/*Write a program that reads a number n and prints out a pattern Z of width n and height n.

First line should print n stars.

Second line should print a  *  after  n-2 spaces.

Third line should print a * after n-3 spaces and so on upto n-1 lines.

Last line should print n stars.*/


#include<simplecpp>

main_program
{
//Write your code here
    int n,k;
    cin >> n;
    k=n;
    repeat(n)
    {
        cout << "*";
    }
    cout << "\n";
    repeat(n-2)
    {
        repeat(k-2)
        {
            cout << " ";
        }
        cout << "*" <<endl;
        k--;
    }
    repeat(n)
    {
        cout << "*";
    }

}



