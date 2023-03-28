#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin>>a[i];   
    }
    if(n==1){
        cout<<1;
        return 0;
    }
    else if (n==2){
        cout<<2;
        return 0;
    }
    int max=0;
    int count=2;
    for (int i = 2; i < n; i++){
        if(a[i]==a[i-1]+a[i-2]){
            count++;
        }
        else{
            count=2;
        }
        if(count>max){
            max=count;
        }
    }
    if(count!=0){
        cout<<max;
    }
    else{
        cout<<2;   
    }
    return 0;
}
