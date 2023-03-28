#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int s[4];
    map<int,int> mp;
    int count=0;
    for(int i=0;i<4;i++){
        cin>>s[i];
        if(mp.find(s[i])==mp.end()){
            mp.insert({s[i],0});
        }
        else{
            count++;
        }
    }
    cout<<count;
    return 0;
}