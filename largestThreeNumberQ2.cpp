// Q2-> WAP to find the largest three elements in the array.
#include <iostream>
#include <climits>
using namespace std;
int main()
{
   int n;
   cout << "enter the size of array  ";
   cin >> n;
   int a[n];
   cout << "enter the element  :";
   for (int i = 0; i <= n - 1; i++)
   {
      cin >> a[i];
   }
   int max1 = INT_MIN;
   int max2 = INT_MIN;
   int max3 = INT_MIN;
   for (int i = 0; i < n; i++)
   {
      if (max1 < a[i])
      {
         max3 = max2;
         max2 = max1;
         max1 = a[i];
      }
      else if (max2 < a[i])
      {
         max3 = max2;
         max2 = a[i];
      }
      else if (max3 < a[i])
      {
         max3 = a[i];
      }
   }
   cout << endl
        << "Three largest elements of the array are " << max1 << "," << max2 << "," << max3;
   return 0;
}
