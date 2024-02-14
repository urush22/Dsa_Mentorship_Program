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
    int array[size];
    for(int i=0;i<size;i++){
        array[i]=arr[i];
    }
    int n=sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n);
    for(int i=0;i<size;i++){
    if(arr[i]==array[i]){
        cout<<"Givean array is a sorted array";
    }
    else{
        cout<<"not sorted ";
    }
    }
    
}
