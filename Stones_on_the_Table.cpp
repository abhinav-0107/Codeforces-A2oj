#include<iostream>
#include<bits/stdc++.h>
 
using namespace std;

int main(){
    int n;
    string s;
    cin>>n;
    cin>>s;
    int count=0;
    for(int i=0;i<n-1;i++){
        if(s[i]==s[i+1]){
            count++;
        }
    }
    cout<<count;
    return 0;
}