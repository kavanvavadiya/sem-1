/*Given two n-dimensional vectors u and v, and an order p, find the un-weighted minkowski distance between them.
The un-weighted minkowski distance between two vectors is defined by the following equation:



The first two inputs to your program will be n and p.
The subsequent 2n inputs will be:

 u1 v1

 u2 v2

    .

    .

    .

 un vn   */
#include<simplecpp>

main_program{
int n,p,u,v,sum=0;

cin >> n >> p;
for(int i=0;i<n;i++)
{
cin >> u >> v;

sum =sum+pow(abs(u-v),p);  //To find summation

}
cout << fixed;		// uses fixed floating point representation

cout.precision(2);
cout << pow(sum,1.0/p);   //final power



}
