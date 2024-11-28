#include <iostream>
using namespace std;


int posOfMax(float A[], int L){
// Returns the index of the largest element in A.
// Invariant for iteration i: 
// maxIndex = the index of the max in A[0..i-1].
 int i=1, maxIndex=0; // invariant holds.
 for(i=1; i<L; i++)
 if(A[maxIndex] < A[i]) maxIndex = i;
 return maxIndex;
}
//Number of comparisons: L-1

void selSort(float A[], int N){
 for(int i=N; i>1; i--){
 int maxIndex = posOfMax(A,i); // posOfMax thinks array only has i elements
 // exchange A[i-1], A[maxIndex]
 float maxVal = A[maxIndex];
 A[maxIndex] = A[i-1];
 A[i-1] = maxVal; // exchange done!
 }
}



int main(){
    int n;
    cin >> n;
    float arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    selSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    

return 0;
}