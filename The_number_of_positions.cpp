#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,a,b;
    cin>>n>>a>>b;
    vector<int>va;
    vector<int>vb;
    for(int j = 0; j<=b ; j++){
        vb.push_back(j);
    }
    for(int i = a; i<=n-1 ; i++){
        va.push_back(i);
    }
    int count=0;
    for (int j = 0; j < vb.size() ; j++){
        for (int i = 0; i < va.size(); i++){
            int sum=(va[i]+vb[j]);
            if(sum==n-1){
                count++;
            }   
        }
    }
    cout<<count;
    return 0;
}