// Q6->Find the unique number in a given Array where all the elements are being repeated twice with one value being unique.
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter size of array ";
    cin >> n;
    int a[n];
    cout << "enter elements ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        bool flag = true;
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                continue;
            if (a[i] == a[j])
            {
                flag = false;
                break;
            }
        }
        if (flag == true)
        {
            cout << "unique number is " << a[i];
            break;
        }
    }
}
