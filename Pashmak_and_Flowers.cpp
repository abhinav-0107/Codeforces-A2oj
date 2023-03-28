#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    long long int n;
    cin>>n;
    long long int b[n];
    for(long long int i=0;i<n;i++){
        cin>>b[i];
    }
    sort(b,b+n);
    long long int max=b[n-1]-b[0];
    cout<<max<<" ";
    long long int cmax=0,cmin=0;
    for (long long int i = 0; i < n; i++)
    {
        if(b[i]==b[0]){
            cmin++;
        }
        if(b[i]==b[n-1]){
            cmax++;
        }
    }
    long long int ways;
    if(b[n-1]-b[0]==0){
        ways=(n*(n-1))/2;
        cout<<ways;
    }
    else{
        ways=cmax*cmin;
        cout<<ways;
    }
    return 0;
}