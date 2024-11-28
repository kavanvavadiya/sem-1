/* Hint: xn may exceed the range of an integer variable. You have to figure out how to get around this problem.
 Note that remainder operation distributes over multiplication as (x*y) % n = ((x % n) * (y % n)) % n.   */
#include <simplecpp>
main_program
{
    long long int  x,n,k,ans=1;

    cin >> x >> n >>k;
    for(;n>0;n=n/2)
    {
        if(n%2==1)
            ans=(ans*x)%k;  // if n=13 for 1st iteration ans=x%k and x become x^2%k  then n become 6  ans does not change and x become x^4%k
           x=(x*x)%k;         //  then 3rd itteration n become 3 ans become ((x%k)*(x^4%k))%k = x^5%k and after four iteration loop stop and gives x^13 %k


    }
    cout <<ans;
}
