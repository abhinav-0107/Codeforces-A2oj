#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int count(vector<vector<int>> mat){
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(mat[i][j]==1){
                return (abs((i+1)-3)+abs((j+1)-3));
            }
        }
    }
    return -1;
}


int main(){
    vector<vector<int>> mat;
    vector<int> row;
    int x1,x2,x3,x4,x5;
    for(int i=0;i<5;i++){
        cin>>x1>>x2>>x3>>x4>>x5;
        mat.push_back({x1,x2,x3,x4,x5});
    }
    cout<<count(mat);
    return 0;
}