//Q4->Find the difference between the sum of elements at even indices to the sum of elements at odd indices.
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
   int sumeven=0;
   int sumodd=0;
    for(int i=0; i<=n-1; i++){
        if(i%2==0) sumeven +=a[i];
        else sumodd += a[i];
    }
    int diff=sumeven-sumodd;
    cout<<"sum of even indices is : "<<sumeven<<endl;
    cout<<"sum of odd indices is : "<<sumodd<<endl;
    cout<<"diffrence is : "<<diff;
}