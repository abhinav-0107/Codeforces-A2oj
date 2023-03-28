#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int k;
    cin>>k;
    int a[12]; 
    for (int i = 0; i < 12 ; i++){
        cin>>a[i];
    }
    if(k==0){
        cout<<0;
    }
    else{
        sort(a,a+12);
        int sum=0;
        int count=0;
        for (int i = 11; i >= 0; i--){
            sum+=a[i];
            count++;
            if(sum>=k){
                cout<<count;
                break;
            }
        }
        if(sum<k){
            cout<<-1;
        }
    }    
    return 0;
}