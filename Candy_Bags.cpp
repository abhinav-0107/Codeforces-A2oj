#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<vector<int>>v;
    int l=1,r=(n*n);
    while (r>l){
        v.push_back({l,r});
        l++;
        r--;
    }
    for (int i = 0; i < v.size(); i++){
        cout<<v[i][0]<<" "<<v[i][1]<<endl;
    }
    
    return 0;
}