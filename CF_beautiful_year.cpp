#include<iostream>
#include<bits/stdc++.h>
#include<string>

using namespace std;

int main(){
    string s1,s2;
    cin>>s1;
    map<int,int> mp;
    int x=atoi(s1);
    while(1){
        x++;
        to_string(x);
        for(int i=0;i<4;i++){
            if(mp.find(s[i])==mp.end()){
                mp.insert(pair<int,int>(s[i],0));   
            }
        }
        if(mp.size()==4){
            cout<<s;
            break;
        }
    }
    return 0;
}