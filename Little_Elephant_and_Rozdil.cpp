#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    int min=INT_MAX;
    int count=0;
    for (int i = 0; i < n; i++){
        cin>>arr[i];
        if(arr[i]<min){
            min=arr[i];
        }
    }
    int pos;
    for (int i = 0; i < n; i++){
        if(arr[i]==min){
            count++;
            pos=i;
        }
    }
    if(count>1){
        cout<<"Still Rozdil";
    }
    else{
        cout<<pos+1;
    }
    return 0;
}