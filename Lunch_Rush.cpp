#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    vector<vector<int>> v;
    for (int i = 0; i < n; i++){
        int f,t;
        cin>>f>>t;
        v.push_back({f,t});   
    }
    int max_maja=INT_MIN;
    for (int i = 0; i < n; i++){
        if(v[i][1]<=k){
            if(v[i][0]>max_maja){
                max_maja=v[i][0];
            }
        }    
        else{
            if((v[i][0]-(v[i][1]-k))>max_maja){
                max_maja=(v[i][0]-(v[i][1]-k));
            }
        }
    }
    cout<<max_maja;
    
    return 0;
}
