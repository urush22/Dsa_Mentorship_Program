#include <bits/stdc++.h>
using namespace std;
int main(){
    int size;
    cin>>size;
    int arr[size];
    cout<<"{";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"}";
    int n=sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n);
    cout<<"\n"<<arr[n-1]<<" is maximum and "<<arr[0]<<" is minimum";
}