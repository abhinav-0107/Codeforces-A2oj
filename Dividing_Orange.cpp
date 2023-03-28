#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int seg[k];
    vector<vector<int>>ans;
    for (int i = 0; i < k; i++){
        cin>>seg[i];
    }   
    vector<int>v;
    for (int i = 0; i < k; i++){
        v.push_back(seg[i]);
        
        ans.push_back(v);
        v.clear();
    }

    


    return 0;
}