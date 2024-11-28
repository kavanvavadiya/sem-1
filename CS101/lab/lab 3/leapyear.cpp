/*Given a positive integer representing a year as input. Print  Yes  if it is a leap year and  No  otherwise.

Hint: A year is a leap year, if either it is divisible by 400, or it is divisible by 4 but not divisible by 100.*/

#include <simplecpp>

main_program
{
    int n;

    cin >> n;

    if(n%400==0)
        cout << "Yes";
    else if(n%4==0 && n%100!=0)
        cout << "Yes";
    else
        cout << "No";

}
