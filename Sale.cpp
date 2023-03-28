#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,m;
    cin>>n;
    cin>>m;
    int arr[n];
    vector<int> neg;
    for (int i=0; i<n; i++){
        cin>>arr[i];
        if(arr[i]<0){
            neg.push_back(arr[i]);
        }
    }
    sort(neg.begin(),neg.end());
    int ans=0;
    for(int i=0;i<m && i<neg.size();i++){
        ans+=neg[i];
    }
    ans=abs(ans);
    cout<<ans;
    return 0;
}