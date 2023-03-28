#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int p[n];
    for(int i=0;i<n;i++){
        cin>>p[i];
    }
    int count=0,max=p[0],min=p[0];
    for(int i=1;i<n;i++){
        if(min<=p[i] && p[i]<=max){
            count ++;
        }
        if(p[i]>max){
            max=p[i];
        }
        if(p[i]<min){
            min=p[i];
        }
    }
    int ans=n-count-1;
    cout<<ans;
    return 0;
}