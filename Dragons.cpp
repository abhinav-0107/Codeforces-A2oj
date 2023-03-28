#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int s;
    cin>>s;
    int n;
    cin>>n;
    pair<int,int> dra[1000];
    int flag=1;
    for (int i = 0; i < n; i++){
        cin>>dra[i].first;
        cin>>dra[i].second;
    }
    sort(dra,dra+n);
    for (int i = 0; i < n; i++){
        if (s<=dra[i].first){
            flag=0;
            break;
        }
        s+=dra[i].second;
    }
    if(flag==1){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
        
    return 0;
}