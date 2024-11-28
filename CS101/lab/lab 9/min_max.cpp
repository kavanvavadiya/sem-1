#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n, rigid = 0;
    cin >> n;
    int arr[n];                  
    for (int i = 0; i < n; i++)  // taking array from user
    {
        cin >> arr[i];
    }

   
    // finding simple rigid num
    for (int i = 1; i < n - 1; i++)   
    {
        if ((arr[i] > arr[i + 1] && arr[i] > arr[i - 1]) || (arr[i] < arr[i + 1] && arr[i] < arr[i - 1]))
        {
            rigid++;
        }
    }


    // transform digit from previos one and check which rigid is minimum
    for (int i = 0; i < n - 1; i++)
    {
        int rigi=0,tempp;
        tempp = arr[i+1];  // store value of arr[i+1]
        arr[i + 1] = arr[i];
        for (int j = 1; j < n - 1; j++)
        {
            if ((arr[j] > arr[j + 1] && arr[j] > arr[j - 1]) || (arr[j] < arr[j + 1] && arr[j] < arr[j - 1]))
            {
                rigi++;
            }

        }
        rigid=min(rigi,rigid);
        arr[i + 1] = tempp;   // take back value of arr[i+1]

    }
    

    // transform digit from next one and check which rigid is minimum
    for (int i = 0; i < n-1; i++)
    {
        int rigi=0,tempp;
        tempp = arr[i];  // store value of arr[i]
        arr[i] = arr[i+1];
        for (int j = 1; j < n - 1; j++) 
        {
            if ((arr[j] > arr[j + 1] && arr[j] > arr[j - 1]) || (arr[j] < arr[j + 1] && arr[j] < arr[j - 1]))
            {
                rigi++;
            }
        }
        rigid=min(rigi,rigid);   
        arr[i] = tempp;          // take back value of arr[i]

    }
  
    cout << rigid;   // min rigid value
        return 0;
}