#include <simplecpp>

int coin_piles(int a, int b)
{
    if((a<=(2*b) || b <=(2*a)) && (a+b)%3==0) return 1;
    else
        return 0;

}

