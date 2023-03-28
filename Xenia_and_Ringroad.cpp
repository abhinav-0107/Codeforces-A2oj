#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int initial=1,present;
    long long time=0;
    for(int i=1;i<=m;i++){
        cin>>present;
        if(present>=initial){
            time+=(present-initial);
        }
        else{
            time+=(n-(initial-present));
        }
        initial=present;
    }
    cout<<time;
    return 0;
}