#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,m;
    cin>>n;
    cin>>m;
    int can[n];
    int ind[n];
    for (int i = 0; i < n; i++){
        cin>>can[i];
        ind[i]=i;
    }
    int i=0;
    while (i<n){
        can[i]-=m;
        if(can[i]<=0){
            i++;
        }
        else{
            for(int j=i;j<n-1;j++){
                swap(can[j],can[j+1]);
                swap(ind[j],ind[j+1]);
            }                
        }
    }
    cout<<ind[n-1]+1;
    return 0;
}