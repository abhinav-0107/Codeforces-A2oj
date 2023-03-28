#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin>>a[i];
    }
    int min=INT_MAX;
    int i,j;
    for (int k = 0; k < n; k++){
        if(abs(a[k]-a[k+1])<min){
            min=abs(a[k]-a[k+1]);
            i=k;
            j=k+1;
        }
    }
    if(abs(a[n-1]-a[0])<min){
        min=abs(a[n-1]-a[0]);
        i=n-1;
        j=0;
    }
    cout<<i+1<<" ";
    cout<<j+1;
    return 0;
}

