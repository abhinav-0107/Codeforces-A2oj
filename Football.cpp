#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    map<string,int>mp;
    string team;
    for(int i=1;i<=n;i++){
        cin>>team;
        if(mp.find(team)!=mp.end()){
            mp[team]++;
        }
        else{
            mp.insert({team,1});
        }
    }
    string winner;
    int max=0;
    for(auto i:mp){
        if(i.second>max){
            max=i.second;
            winner=i.first;
        }
    }
    cout<<winner;
    return 0;
}