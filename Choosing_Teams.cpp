#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int y[n];
    vector<int>team;
    for (int i = 0; i < n; i++){
        cin>>y[i];
        if((y[i]+k)<=5){
            team.push_back(y[i]);
        }
    }
    cout<<floor(team.size()/3);
    return 0;
}