#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<vector<int>> seg;
    for(int i=0;i<n;i++){
        int l,r;
        cin>>l>>r;
        seg.push_back({l,r});
    }
    int max=seg[0][1],min=seg[0][0];
    for(int i=1;i<n;i++){
        if(seg[i][1]>max){
            max=seg[i][1];
        }
        if(seg[i][0]<min){
            min=seg[i][0];
        }
    }
    for(int i=0;i<n;i++){
        if(seg[i][0]==min && seg[i][1]==max){
            cout<<i+1;
            return 0;
        }
    }
    cout<<-1;
    return 0;
}