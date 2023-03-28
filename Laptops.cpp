#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,a,b;
    vector<vector<int>> l;
    cin>>n;
    while (n--){
        cin>>a>>b;
        l.push_back({a,b});
    }
    sort(l.begin(),l.end());
    for (int i = 0; i < l.size()-1; i++){
        if(l[i][1]>l[i+1][1]){
            cout<<"Happy Alex";
            return 0;
        }
    }
    cout<<"Poor Alex";
    return 0;
}