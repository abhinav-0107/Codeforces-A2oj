#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int k;
    string s;
    cin>>k;
    cin>>s;
    map<char,int>mp;
    for (int i = 0; i < s.size(); i++){
        if(mp.find(s[i])!=mp.end()){
            mp[s[i]]++;
        }
        else{
            mp.insert({s[i],1});
        }
    }
    string ans=""; 
    for (auto i:mp){
        if(i.second%k!=0){
            cout<<"-1";
            return 0;
        }
        else{
            int times=i.second/k;
            while(times--){
                ans+=i.first;
            }
        }
    } 
    string old=ans;
    ans="";
    while (k--){
        ans+=old;
    }
    
    cout<<ans;
    return 0;
}