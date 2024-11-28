#include <iostream>
using namespace std;


int main(){
    int n,count=0;
    cin >> n;
    for (int i = 2; i < n; i++) 
    {
    bool prime=true;
        for (int J = 2; J < i; J++)
        {
            if(i%J==0) {
                prime = false;
                break;
                }
        }
        if(prime) count++;

        
    }
    cout << count;
    

return 0;
}