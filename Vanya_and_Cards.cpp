#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,x;
    cin>>n>>x;
    int num[n];
    int sum=0;
    for (int i = 0; i < n; i++){
        cin>>num[i];
        sum+=num[i];
    }
    int count=0; 
    if(sum==0){
        cout<<0;
    }
    else if(-x<=sum && sum<=x){
        cout<<1;
    }
    else{
        if(sum%x==0){
            cout<<abs(sum/x);
        }
        else{
            cout<<(floor(abs(sum/x)+1));
        }
    }
    return 0;
}