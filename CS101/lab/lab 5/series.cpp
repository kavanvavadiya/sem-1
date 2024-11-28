/*Write a program to approximate the value of x*cos(x)using the Taylor series expansion of  cos(x)around x0=0 upto n+1 terms. */

#include<simplecpp>

main_program
{
//Write your code here
     float x,n,fac=1,ans=0;
    cin >> x >> n;
    for(int i=0; i<=n; i++)
    {


        for(int j=1; j<(2*(i)+1); j++)   // for factorial
        {
            fac=fac*(j);
        }

        ans=ans+(pow(-1,i))*(pow(x,2*i))/fac;   // for taylor series
          fac =1;


    }
    cout << fixed;		// uses fixed floating point representation

    cout.precision(2);	// print two digits after the decimal point
      cout << ans*x;
}
