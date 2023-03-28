#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int index[100000];
    for(int i=1;i<=n;i++){
        int temp;
        cin>>temp;
        index[temp]=i;
    }
    int m;
    cin>>m;
    long long int Vasya=0,Petya=0;
    for (int i = 1; i <= m; i++){
        int q;
        cin>>q;
        Vasya+=index[q];
        Petya+=(n+1-index[q]);
    }
    cout<<Vasya<<" ";
    cout<<Petya;
    return 0;
}