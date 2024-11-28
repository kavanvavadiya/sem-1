#include <iostream>
using namespace std;


int main(){
    int n,l,m,count=0;
    cin >> n >> l >> m;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)   
        {
            if(arr[i]+arr[j]>=l && arr[i]+arr[j]<=m){count++;}
        }
        
    }
    cout << count;
    
    

return 0;
}