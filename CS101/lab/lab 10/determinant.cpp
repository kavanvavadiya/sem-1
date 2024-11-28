// C++ program to find Determinant of a matrix
#include <iostream>

using namespace std;

// Dimension of input square matrix
#define N 5

double determinant(int n, int det[N][N])
{
    if(n==1){ return det[0][0];}
    else if(n==2){return ((det[0][0]*det[1][1]) - (det[0][1]*det[1][0]));}
    int sum=0,sign = +1;
    
for (int i = 0; i < n; i++)
{
    int index;
    
    index = det[0][i];
    int temp[5][5];
    for (int J = 0; J < n-1; J++)
    {
        int count=0;
    int tempp=0;
        for (int k = 0; k < n-1; k++)
        {
            
            if(tempp==i){ count++;}
           temp[J][k] = det[1+J][k+count];
           tempp++;
        }
        
    }

    // cout << "for index "  << index << " determinet is" << endl;
    // for (int i = 0; i < n-1; i++)
    // {
    //     for (int j = 0; j < n-1; j++)
    //     {
    //         cout << temp[i][j] << " ";
    //     }
    //     cout << endl;
        
    // }

    
    //cout << determinant(n-1,temp) << endl;
    
    sum += index * sign * determinant(n-1,temp);
    sign = sign * -1;
//   cout << "sum is " << sum << endl;
}
return sum;

}

int main()
{
    int n;
    cin >> n;
    int det[5][5];

    
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            det[i][j]=0;
        }
        
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> det[i][j];
        }
        
    }
   

    int  k = determinant(n,det);
    cout << k;
}