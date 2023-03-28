#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int r,c;
    cin>>r>>c;
    vector<string> cake;
    set<int>countr;
    set<int>countc;
    int countcell=0;
    for (int i = 0; i < r; i++){
        string s;
        cin>>s;
        cake.push_back(s);
    }
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            if(cake[i][j]=='S'){
                countr.insert(i);
                countc.insert(j);
            }   
        }
    }
    int ans=((r-countr.size())*c)+((c-countc.size())*r)-((c-countc.size())*(r-countr.size()));
    cout<<ans;
    return 0;
}