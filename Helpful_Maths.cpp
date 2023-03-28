#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin>>s;
    int n=s.size();
    string s1="",s2="",s3="";
    for(int i=0;i<n;i=i+2){
        if(s[i]=='1'){
            s1+='1';
        }
        else if(s[i]=='2'){
            s2+='2';
        }
        else{
            s3+='3';
        }
    }
    s="";
    for(int i=0;i<s1.size();i++){
        s+=s1[i];
        s+='+';
    }
    for(int i=0;i<s2.size();i++){
        s+=s2[i];
        s+='+';
    }
    for(int i=0;i<s3.size();i++){
        s+=s3[i];
        s+='+';
    }
    s.pop_back();
    cout<<s;
    return 0;
}