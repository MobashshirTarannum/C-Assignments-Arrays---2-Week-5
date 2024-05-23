// Q3->Check if the given array is sorted or not
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the size of array  ";
    cin >> n;
    int arr[n];
    cout << "enter the element  :";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > arr[i + 1])
            flag = true;
        else if (arr[i] < arr[i + 1])
            flag = true;
    }
    if (flag == true)
        cout << "array is sorted";
    else
        cout << "array is not sorted";
}