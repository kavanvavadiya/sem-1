/*Write a function that takes 3 integers a, b, c as reference parameters and another positive integer n,
 and updates the values of the reference parameters to the nth permutation.
  We refer to each possible permutation with a number as given below in the following table.
Permutation   ==  ans
1 = abc
2 = acb
3 = bac
4 = bca
5 = cab
6 = cba */





#include<simplecpp>

void permutation(int &a, int &b, int &c, int n)
{
    if(n==1) return;
    else if(n==2)
    {
        int r = c; // swap between b and c
        c=b;
        b=r;
        return;
    }
    else if(n==3)  // swap between b and a
    {
        int r = a;
        a=b;
        b=r;
    }
    else if(n==4)   // swap between a,b and c
    {
        int r = a;
        a=b;
        b=c;
        c=r;
    }
    else if(n==5)  // swap between b and c,a
    {
        int r = a;
        a=c;
        c=b;
        b=r;
    }
    else if(n==6) // swap between a and c
    {
        int r = a;
        a=c;
        c=r;
    }
}
