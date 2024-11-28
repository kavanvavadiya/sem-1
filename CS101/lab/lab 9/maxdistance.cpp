#include <iostream>
using namespace std;


int main(){

    int n,distance;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)  // taking input from user in array 
    {
        cin >> arr[i];
    }
    distance = 0;

    for (int i = 0; i < n; i++)             
    {
        for (int j = i; j < n; j++)
        {
            
        if(arr[i]==arr[j]) distance = max(distance,j-i);  // finding max distance
        }
    }   
    cout << distance;
    
    

return 0;
}