#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n, rigid = 0, temp = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;

   

    for (int i = 1; i < n - 1; i++)
    {
        if ((arr[i] > arr[i + 1] && arr[i] > arr[i - 1]) || (arr[i] < arr[i + 1] && arr[i] < arr[i - 1]))
        {
            rigid++;
        }
    }
    // cout << rigid<<endl;

    for (int i = 0; i < n - 1; i++)
    {
        int rigi=0,tempp;
        tempp = arr[i+1];
        arr[i + 1] = arr[i];
        for (int j = 1; j < n - 1; j++)
        {
            if ((arr[j] > arr[j + 1] && arr[j] > arr[j - 1]) || (arr[j] < arr[j + 1] && arr[j] < arr[j - 1]))
            {
                rigi++;
            }
            // cout << rigi << endl;
        }
        rigid=min(rigi,rigid);
        arr[i + 1] = tempp;


        // cout << count;

    }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;
    for (int i = 0; i < n-1; i++)
    {
        int rigi=0,tempp;
        tempp = arr[i];
        arr[i] = arr[i+1];
        for (int j = 1; j < n - 1; j++)
        {
            if ((arr[j] > arr[j + 1] && arr[j] > arr[j - 1]) || (arr[j] < arr[j + 1] && arr[j] < arr[j - 1]))
            {
                rigi++;
            }
        }
        rigid=min(rigi,rigid);
        arr[i] = tempp;


        // cout << count;
    }
    //  for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    cout << rigid;
        return 0;
}