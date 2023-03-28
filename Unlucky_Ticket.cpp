#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    string l=s.substr(0,n);
    string r=s.substr(n,2*n);
    sort(l.begin(),l.end());
    sort(r.begin(),r.end());
    int count1=0;
    int count2=0;
    for(int i=0;i<n;i++){
        if(l[i]>r[i]){
            count1++;
        }
        else if(l[i]<r[i]){
            count2++;
        }
    }
    if(count1==n || count2==n){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}