#include<iostream>
#include<bits/stdc++.h>

using namespace std;

string eq(vector<vector<int>> v, int n){
    int sumx=0,sumy=0,sumz=0;
    int j=0;
    while(j<n){
        sumx+=v[j][0];
        sumy+=v[j][1];            
        sumz+=v[j][2];
        j++;            
    }
    if(sumx==0 && sumy==0 && sumz==0){
        return "YES";
    }
    return "NO";
}

int main(){
    int n;
    cin>>n;
    int x,y,z;
    vector<vector<int>> v;
    for(int i=0;i<n;i++){
        cin>>x >>y >>z ;
        v.push_back({x,y,z});
    }
    cout<<eq(v,v.size());
    return 0;
}