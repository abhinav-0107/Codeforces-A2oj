#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    int sum=0;
    for (int i = 0; i < n; i++){
        cin>>arr[i];
        if(arr[i]<0 && k>0){
            arr[i]*=-1;
            k--;
        }
    }
    if(k>0 && k%2!=0){
        sort(arr,arr+n);
        arr[0]*=-1;
    }
    for (int i = 0; i < n; i++){
        sum+=arr[i];
    }
    cout<<sum;
    return 0;
}