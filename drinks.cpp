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
    float sum =0;
    for(int i=0;i<n;i++){
        sum+=p[i];
    }
    float ans=sum/n;
    cout<<ans;
    return 0;
}