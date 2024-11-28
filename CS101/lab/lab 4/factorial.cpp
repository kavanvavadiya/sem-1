/* Write a program to calculate the factorial of a number.
 Given a number n as input, print the value of the factorial n!. */

#include<simplecpp>

main_program
{
//Write your code here
    int n,a=1;
    cin >> n;
    for(int i=1;i<=n;i++){
    a=i*a;     // n!=n*(n-1)!
    }
    cout << a;
}
