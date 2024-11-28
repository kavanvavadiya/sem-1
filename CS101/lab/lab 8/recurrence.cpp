#include <simplecpp>
int W(int n)
{
    if(n==1 || n==0 | n==2)  // base cases
    {
        return 1;
    }

    return W(n-1) + W(n-2) + W(n-3);  //  recurrence
}
