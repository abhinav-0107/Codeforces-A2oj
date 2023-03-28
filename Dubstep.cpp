#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin>>s;
    int i=0;
    while(i<s.size()){
        if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B'){
            i=i+3;
        }
        else{
            cout<<s[i];
            if(s[i+1]=='W' && s[i+2]=='U' && s[i+3]=='B'){
                cout<<" ";
            }
            i++;
        }
    }
    return 0;
}