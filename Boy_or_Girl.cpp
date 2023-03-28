#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin>>s;
    map<int,int> mp;
    for (int i=0; i<s.size();i++){
        if(mp.find(s[i])==mp.end()){
            mp.insert({s[i],0});
        }
    }
    if(mp.size()%2!=0){
        cout<<"IGNORE HIM!";
    }
    else{
        cout<<"CHAT WITH HER!";
    }
    
    return 0;
}