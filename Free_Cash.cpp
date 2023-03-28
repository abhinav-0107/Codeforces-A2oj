#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    map<vector<int>,int>mp;
    for (int i = 0; i < n; i++){
        int h,m;
        cin>>h>>m;
        mp[{h,m}]++;
    }
    int cash=0;
    for (auto i:mp){
        if(i.second>cash){
            cash=i.second;
        }
    }
    cout<<cash;
    return 0;
}