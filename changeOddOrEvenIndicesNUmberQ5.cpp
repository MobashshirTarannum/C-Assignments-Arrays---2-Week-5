//Q5->Given an array of integers, change the value of all odd indexed elements to its second multiple
// and increment all even indexed values by 10.
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
   
    for(int i=0; i<=n-1; i++){
        if(i%2==0) a[i] +=10;
        else a[i] *=2;
        cout<<a[i]<<" ";
    }
}