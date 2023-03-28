#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int t[n][n];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if(i==j){
                t[i][j]=k;
            }
            else{
                t[i][j]=0;
            }
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout<<t[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}