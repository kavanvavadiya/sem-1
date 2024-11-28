#include<simplecpp>

// General idea :  count ways(n) = when 1st dice show 1 then dice roll and next sum needed is n-1 simalarly for 2,3,4,5,6

int count_ways(int n)
{

    if(n<0)                  // base case
    {
        return 0;
    }
    else if (n==0)      // as initial n>0 than after itteration or recurrence we need 1 for n=0 eg. for n=1
    {
        return 1;
    }
    else
    {
        return count_ways(n-1) + count_ways(n-2) + count_ways(n-3) +count_ways(n-4) +count_ways(n-5) + count_ways(n-6);
    }

}
