#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;    //taking size of array from user 
    char A[n];
    char B[m];

    for (int i = 0; i < n; i++)  //define A array 
    {

        cin >> A[i];
    }
    for (int i = 0; i < m; i++) //define B array 
    {

        cin >> B[i];
    }
 
    int i = 0, j = 0;
    for (; i < n && j < m;)
    {
        // finding min value from both array elements
        if (A[i] < B[j])  
        {
            if(i>0 && A[i]==A[i-1]){  }
            else { cout << A[i] << " "; }
            
            i++;
        }
        else if (A[i] > B[j])
        {
            if(j>0 && B[j]==B[j-1]){  }
            else { cout << B[j] << " "; }
            
            j++;
        }
        else   // both elements are equal
        {
            if(i>0 && A[i]==A[i-1]){ i++; }
            if(j>0 && B[j]==B[j-1]){ j++; }
            else {  cout << B[j] << " ";  i++;
            j++;}
            
            
        }
    }

    // remaing elements of both arrays

    for (; i < n; i++)  
    {
        if(i>0 && A[i]==A[i-1]){  }
            else { cout << A[i] << " "; }
       
    }
    for (; j < m; j++)
    {
        if(j>0 && B[j]==B[j-1]){  }
            else { cout << B[j] << " "; }
    }

    return 0;
}
