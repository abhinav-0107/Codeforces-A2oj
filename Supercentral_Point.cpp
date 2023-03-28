#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int mat[n][2];
    int count=0;
    for(int i=0;i<n;i++){
        cin>>mat[i][0];
        cin>>mat[i][1];
    }
    int left=0,right=0,upper=0,lower=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(mat[i][0]==mat[j][0] && mat[i][1]<mat[j][1]){
                upper++;
            }
            else if(mat[i][0]==mat[j][0] && mat[i][1]>mat[j][1]){
                lower++;
            }
            else if(mat[i][0]>mat[j][0] && mat[i][1]==mat[j][1]){
                left++;
            }
            else if(mat[i][0]<mat[j][0] && mat[i][1]==mat[j][1]){
                right++;
            }
        }
        if(left>=1 && right>=1 && upper>=1 && lower>=1){
            count++;
        }
        lower=0;
        left=0;
        right=0;
        upper=0;
    }
    cout<<count;
    return 0;
}