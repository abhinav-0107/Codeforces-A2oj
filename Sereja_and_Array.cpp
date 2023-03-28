#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,m,t,q,v,x,y,inc=0;
    cin>>n>>m;
    int arr[n];
    vector<int>ans;

    for (int i = 1; i <= n; i++){
        cin>>arr[i];
    } 

    while (m--){
        cin>>t;
        if(t==1){
            cin>>v>>x;
            arr[v]=x-inc;
        }
        else if(t==2){
            cin>>y;
            inc+=y;
        }
        else{
            cin>>q;
            ans.push_back((arr[q]+inc));
        }
    }

    for (int i = 0; i < ans.size(); i++){
        cout<<ans[i]<<endl;
    }
    return 0;
}