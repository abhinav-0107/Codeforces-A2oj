#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    long long int n;
    cin>>n;
    long long int val[n];
    long long int sum1[n];
    long long int sum2[n];
    for(long long int i=0;i<n;i++){
        cin>>val[i];
        if(i==0){
            sum1[i]=val[i];
        }
        else{
            sum1[i]=sum1[i-1]+val[i];
        }
    }
    sort(val,val+n);
    for (long long int i = 0; i < n; i++){
        if(i==0){
            sum2[i]=val[i];
        }
        else{
            sum2[i]=sum2[i-1]+val[i];
        }
    }
    long long int m;
    cin>>m;
    vector <long long int> ans;
    while(m--){
        int type,l,r;
        cin>>type>>l>>r;
        if(type==1){
            if((l-2)<0){
                ans.push_back(sum1[r-1]);
            }
            else{
                ans.push_back(sum1[r-1]-sum1[l-2]);
            }
        }
        else{
            if((l-2)<0){
                ans.push_back(sum2[r-1]);
            }
            else{
                ans.push_back(sum2[r-1]-sum2[l-2]);
            }
        }
    }
    for(long long int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }
    return 0;
}