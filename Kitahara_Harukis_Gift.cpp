#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    if(n==1){
        cout<<"NO";
        return 0;
    }
    int w[n];
    int sum=0;
    int count200=0;
    int count100=0;
    for(int i=0;i<n;i++){
        cin>>w[i];
        sum+=w[i];
        if(w[i]==200){
            count200++;
        }
        else{
            count100++;
        }
    }
    sum/=100;
    if(sum%2==0){
        if(count100==0 && n%2!=0){
            cout<<"NO";
        }
        else{
            cout<<"YES";
        }
    }
    else{
        cout<<"NO";
    }

    return 0;
}