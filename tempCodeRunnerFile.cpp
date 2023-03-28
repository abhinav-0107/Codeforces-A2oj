#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,m,t,q,v,x,y,inc(0);
    cin>>n>>m;
    vector<int>arr;
    vector<int>ans;

    for (int i = 0; i < n; i++){
        cin>>arr[i];
    } 

    while (m--){
        cin>>t;
        if(t==1){
            cin>>v>>x;
            arr[v-1]=x;
        }
        else if(t==2){
            cin>>y;
            inc+=y;
        }
        else{
            cin>>q;
            ans.push_back(arr[q-1]+inc);
        }
    }
    
    for (int i = 0; i < ans.size(); i++){
        cout<<ans[i]<<endl;
    }
    return 0;
}