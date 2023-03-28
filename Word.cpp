#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin>>s;
    int n=s.size();
    int lower=0,upper=0;
    for(int i=0;i<n;i++){
        if(islower(s[i])){
            lower++;
        }
        else if(isupper(s[i])){
            upper++;
        }
    }
    if(lower>=upper){
        for(int i=0;i<n;i++){
            s[i]=tolower(s[i]);
        }
    }
    else{
        for(int i=0;i<n;i++){
            s[i]=toupper(s[i]);
        }
    }
    cout<<s;
    return 0;
}