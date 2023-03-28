#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,s,t;
    cin>>n>>s>>t;
    int p[n+1];
    for (int i = 1; i <= n; i++){
        cin>>p[i];
    }
    int count=0;
    while (s!=t && p[s]!=0){
        int temp=p[s];
        p[s]=0;
        s=temp;
        count++;
    }
    cout<<(s==t ? count : -1);
    return 0;
}