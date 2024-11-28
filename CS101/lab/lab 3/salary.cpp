/* Write a program that takes input as the basic salary of an employee and calculates the gross salary according to given conditions.

Basic Salary <= 10000 : HRA = 20%, DA = 80%

Basic Salary is between 10001 to 20000 : HRA = 25%, DA = 90%

Basic Salary >= 20001 : HRA = 30%, DA = 95%

HRA and DA are calculated wrt to the basic salary (x % of basic salary).



To calculate Gross Salary use the following formula:

Gross Salary = Basic Salary + HRA + DA  */

#include <simplecpp>
main_program
{
    float bsalary , gsalary,HRA,DA;  // bsalary = basic salary  gsalary = global salary
    cin >> bsalary;
    if(bsalary <= 10000)
    {
        HRA=0.2;
        DA=0.8;
    }
    else if(bsalary <= 20000)
    {
        HRA=0.25;
        DA=0.9;
    }
    else
    {
        HRA=0.3;
        DA=0.95;
    }

    gsalary = bsalary*(1+HRA+DA);   // Gross Salary = Basic Salary + HRA + DA

 cout <<gsalary;

}
