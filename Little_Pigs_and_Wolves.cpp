#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    char mat[n+2][m+2]={'.'};
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
            cin>>mat[i][j];
        }
    }
    int eaten(0);
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
            if(mat[i][j]=='W'){
                if(mat[i][j+1]=='P' || mat[i][j-1]=='P' || mat[i+1][j]=='P' || mat[i-1][j]=='P'){
                    eaten++;
                }
            }
        }
    }
    cout<<eaten;
    return 0;
}
