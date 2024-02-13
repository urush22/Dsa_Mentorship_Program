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
    cout<<"}"<<"\n";
    int num;
    cout<<"enter the number: ";
    cin>>num;
    for(int i=0;i<size;i++){
        if(arr[i]==num){
            cout<<i;
        }
    }
}