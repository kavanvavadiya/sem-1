/* Write a program to read the base of two numbers and the numbers and print their sum in decimal.



Base of a number:

In mathematics, a base is the number of different digits or combination of digits and letters that a system of counting uses to represent numbers. For example, the most common base used today is the decimal system. Computers use binary numbers which are of base 2.



Eg:

2 * 10 + 3 = 23 (in decimal or base 10):

2 * 8 + 7 = 27 (in base 8)

2 * 32 + 1 * 3 + 2 = 212 (in base 3) */

#include<simplecpp>

main_program
{
//Write your code here
    int base1,n1,k,r,n,base,sum=0,tsum=0,count=0;
    int base2,n2;

    cin >> base1 >> n1 ;     //taking input
    cin >> base2 >> n2 ;     //taking input
    n=n1;  //store value of n1 in n  for use to find no. of digit in number
    k=n1;  //tore value of n1 in k  for use in 2nd loop
    base=base1;  //store value of base1 in base

    for(int j=1; j<=2; j++)  //2 for 2 number
    {
        for(int v=0; n!=0; v++)   //count in digit in number
        {
            n=n/10;
            count++;

        }

        for(int i=0; i<count; i++)   // converon to one to decimal like binery to decimal
        {
            r=k%10;
            r=r*pow(base,i);
            sum=sum+r;

            k=k/10;
        }
        tsum=sum+tsum;   // tsum = total sum
        n=n2;              //store value of n2 in n  for use to find no. of digit in number
        k=n2;                //tore value of n2 in k  for use in 2nd loop
        base=base2;         //store value of base2 in base
        sum=0;             //re define sum & count to zero for 2nd number
        count=0;

    }
    cout << tsum;

}

