#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>v;
    for(int i=1;i<=n;i++){
        v.push_back(i);
    }
    if(!(n%2)){
        for (int i = 0; i < n-1; i+=2){
            swap(v[i],v[i+1]);
        }
        for (int i = 0; i < v.size(); i++){
            cout<<v[i]<<" ";
        }
    }
    else{
        cout<<-1;
    }
    return 0;
}