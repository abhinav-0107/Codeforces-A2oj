#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,m;
    cin>>n;
    int s[n];
    vector<vector<int>>box;
    vector<int>ans;
    for (int i = 0; i < n; i++){
        cin>>s[i];
    }
    cin>>m;
    for (int i = 0; i < m; i++){
        int w,h;
        cin>>w>>h;
        box.push_back({w,h});
    }
    for (int i = 0; i < m; i++){
       int max=*max_element(s,s+box[i][0]);
       ans.push_back(max);
       for (int i = 0; i < box[i][0]; i++){
           s[i]=max+box[i][1];
       }
    }
    for (int i = 0; i < ans.size(); i++){
        cout<<ans[i]<<endl;
    }
    return 0;
}