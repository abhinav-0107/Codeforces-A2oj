#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,x;
    cin>>n;
    int count[8]={0};
    for (int i = 0; i < n; i++){
        cin>>x;
        if(x==5 || x==7){
            cout<<-1;
            return 0;
        }
        count[x]++;
    }
    int k=n/3;
    if(count[1]==k && count[4]+count[6]==k && count[2]+count[3]==k && count[4]<=count[2] && count[3]<=count[6]){
        for (int i = 0; i < count[4]; i++){
            cout<<1<<" "<<2<<" "<<4<<endl;
        }
        count[2]-=count[4];
        for (int i = 0; i < count[2]; i++){
            cout<<1<<" "<<2<<" "<<6<<endl;
        }
        for (int i = 0; i < count[3]; i++){
            cout<<1<<" "<<3<<" "<<6<<endl;
        }
    }
    else{
        cout<<-1;
        return 0;
    }
    return 0;
}