#include <simplecpp>


int knights(int k){

int ans = ((k*k)*((k*k)-1)/2) - 4*(k-1)*(k-2);

return ans;
}
# include<simplecpp>
int reverseInBinary(int a){
    int temp = a, out = 0;
    while(temp > 0){
        out *= 2;
        if(temp%2 == 1){
            out += 1;
        }
        temp /= 2;
    }
    return out;
}
int powint(int a, int b){
    int rb = reverseInBinary(b);
    int out = 1;
    while(rb > 0){
        out *= out;
        if(rb%2 == 1){
            out *= a;
        }
        rb /= 2;
    }
    return out;
}
main_program{
    cout<<powint(10,3)+powint(9,3)<<" "<<powint(12,3)+powint(1,3);
}
