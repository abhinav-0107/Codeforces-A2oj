#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int next(int n){
    
    return n;
}

int main(){
    int n;
    cin>>n;
    int p[n];
    for (int i = 0; i < n; i++){
        cin>>p[i];
    }
    sort(p,p+n);
    swap(p[0],p[n-1]);
    for (int i = 0; i < n; i++){
        cout<<p[i]<<" ";
    }
    return 0;
}