#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0 ; i<7; i++){
        cin>>arr[i];
    }
    int sum=0;
    for (int i = 0; i < 7; i=(i+1)%7){
        sum+=arr[i];
        if(sum>=n){
            cout<<i+1;
            break;
        }
    }
    return 0;
}