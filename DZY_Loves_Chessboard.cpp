#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    char mat[n][m];
    for(int row=0;row<n;row++){
        for (int column=0;column<m;column++){
            cin>>mat[row][column];
            if(mat[row][column]=='.'){
                if((row+column)%2==0){
                    mat[row][column]='B';
                }
                else{
                    mat[row][column]='W';
                }
            }
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cout<<mat[i][j];   
        }
        cout<<endl;
    }
    
    return 0;
}