#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int count0=0;
    int count5=0;
    int sum=0;
    int num[n];

    for (int i = 0; i < n; i++){
        cin>>num[i];
        if(num[i]==0){
            count0++;
        }
        else{
            count5++;
        }
        sum+=num[i];
    }

    while(sum>=0){
        if(sum%9!=0){
            count5--;
            n--;
        }
        else{
            break;
        }
        sum-=5;
    }

    if(sum==0 && count0>0){
        cout<<0;
        return 0;
    }
    if(sum==0){
        cout<<-1;
        return 0;
    }
    int arr[n];
    if(sum%9==0 && count0>0){
        for ( int i = 1; i <= n; i++){
            if(i<=count5){
                arr[i-1]=5;
            }
            else{
                arr[i-1]=0; 
            }
        }
        for (int i = 0; i < n; i++){
            cout<<arr[i];
        }
    }
    else{
        cout<<-1;
    }
return 0;
}