#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,m;
    cin>>n;
    int a[n];
    
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    cin>>m;
    int b[m];
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    
    float gear_ratio;
    float max_gear_ratio=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            gear_ratio=float(b[j])/a[i];
            if((gear_ratio-floor(gear_ratio))==0 && gear_ratio>max_gear_ratio){
                max_gear_ratio=gear_ratio;
            }
        }
    }
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            gear_ratio=float(b[j])/a[i];
            if(gear_ratio==max_gear_ratio){
                count++;
            }
        }
    }
    cout<<count;
    return 0;
}