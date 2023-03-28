#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int chips=0;
    int i = 0;
    while(chips<m){
        if((m-chips)>(i+1)){
            chips+=(i+1);
        }
        else if((m-chips)==(i+1)){
            cout<<0;
            break;
        }
        else{
            cout<<m-chips;
            break;
        }
        i=(i+1)%n;
    }
    return 0;
}