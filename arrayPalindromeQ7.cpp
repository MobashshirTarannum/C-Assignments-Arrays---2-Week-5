//Q7->If an array arr contains n elements, then check if the given array is a palindrome or not .
#include <iostream>
#include<climits>
using namespace std;
int main() {
 int n;
    cout<<"enter the size of array  ";
    cin>>n;
    int a[n];
    cout<<"enter the element  :";
     for(int i=0; i<=n-1; i++){
    cin>>a[i];
   }
        bool flag=true;
        for(int i=0; i<=n-1; i++){
            if (a[i] != a[n - i - 1]) {
            flag =false;
            break;
        }
        
   }
   if(flag==true) cout<<"yes";
   else cout<<"not";
   
}