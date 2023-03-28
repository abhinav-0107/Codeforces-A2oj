#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,m;
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    cin>>n>>m;

    if(n>m){
        for (int i = 1; i <= min(n,m) ; i++){
            cout<<"BG";
        }
        for (int i = 1; i <= n-m; i++){
            cout<<'B';
        }
    }
    else{
        for (int i = 1; i <= min(n,m) ; i++){
            cout<<"GB";
        }
        for (int i = 1; i <= m-n; i++){
            cout<<'G';
        }
    }

    return 0;
}