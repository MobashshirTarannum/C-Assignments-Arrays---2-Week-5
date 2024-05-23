// Q1->Count the number of elements strictly greater than x.
#include <iostream>
using namespace std;
int main()
{
    int a[50];
    int count = 0, x;
    int n;
    cout << "enter the size of array ";
    cin >> n;
    cout << "enter number to cheak number of elements strictly greater ";
    cin >> x;
    cout << "enter " << n << " elements  ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] > x)
            count++;
    }
    cout << "number greater than " << x << " is :" << count;
    return 0;
}