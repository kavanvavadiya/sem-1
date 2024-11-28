#include <iostream>
#include <math.h>
using namespace std;

int main()
{
      int n;
      cin >> n;
      int x[n], y[n], sumx = 0, sumy = 0, sumxy = 0, sumxx = 0, sumyy = 0;
      for (int i = 0; i < n; i++)   // finding summation of x
      {
            cin >> x[i];
            sumx += x[i];
      }
      for (int i = 0; i < n; i++)  // finding summation of y
      {
            cin >> y[i];
            sumy += y[i];
      }
      for (int i = 0; i < n; i++)  // finding summation of xiyi
      {
            sumxy += x[i] * y[i];
      }
      for (int i = 0; i < n; i++)  // finding summation of x^2
      {
            sumxx += x[i] * x[i];
      }
      for (int i = 0; i < n; i++) // finding summation of y^2
      {
            sumyy += y[i] * y[i];
      }

      float num, den;
      den = sqrt((n * sumxx) - (sumx) * (sumx)) * sqrt((n * sumyy) - (sumy) * (sumy)); //denominator
      num = (n * sumxy) - (sumx) * (sumy);
      if (den == 0)
      {
            cout << "-1";
      }
      else
      {
            float ans;
            ans = num / den;   // using formula
            cout << fixed;
            cout.precision(2);
            cout << ans;
      }

      return 0;
}