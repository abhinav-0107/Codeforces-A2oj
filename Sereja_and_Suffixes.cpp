#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int a[n];
    for (int i = 0; i < n; i++){
        cin>>a[i];
    }
    vector<int>ans;
    while(m--){
        int l;
        cin>>l;
        set<int>s;
        for (int i = l-1; i < n; i++){
            s.insert(a[i]);
        }
        ans.push_back(s.size());
        s.clear();
    }
    for (int i = 0; i < ans.size(); i++){
        cout<<ans[i]<<endl;
    }
    
    return 0;
}