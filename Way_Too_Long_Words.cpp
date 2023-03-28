#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    string s;
    string ans="";
    string a[n];
    for(int i=0;i<n;i++){
        cin>>s;
        if(s.size()>10){
            ans+=s[0];
            ans+=to_string(s.size()-2);
            ans+=s[s.size()-1];
            a[i]=ans;
            ans="";
        }
        else{
            a[i]=s;
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
    return 0;
}