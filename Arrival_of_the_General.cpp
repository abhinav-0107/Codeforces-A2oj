#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int v[n];
    
    for (int i = 0; i < n; i++){
        cin>>v[i];
    }
    
    int max=v[0],min=v[0];

    for (int i = 1; i < n; i++){
        if(v[i]>max){
            max=v[i];
        }
        if(v[i]<min){
            min=v[i];
        }
    }

    int l=0,r=n-1;
    int minind,maxind;
    int t;

    while (r>=0){
        if(v[r]!=min){
            r--;
        }
        else{
            minind=r;
            break;
        }
    }

    while (l<n){
        if(v[l]!=max){
            l++;
        }
        else{
            maxind=l;
            break;
        }
    } 

    if(maxind>minind){
        t=maxind+((n-1)-minind)-1;
        cout<<t;
    }
    else{
        t=maxind+((n-1)-minind);
        cout<<t;
    }
    return 0;
}