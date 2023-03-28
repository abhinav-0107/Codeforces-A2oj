#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int num[n];
    int sum=0;
    for (int i = 0; i < n; i++){
        cin>>num[i];
        sum+=num[i];
    }
    int count=0;
    if(sum%2==0){
        for (int i = 0; i < n; i++){
            if(num[i]%2==0){
                count++;
            }
        }
    }
    else{
        for (int i = 0; i < n; i++){
            if(num[i]%2!=0){
                count++;
            }
        }
    }
    cout<<count;
    return 0;
}
