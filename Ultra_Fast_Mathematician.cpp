#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    string s1,s2;
    cin>>s1;
    cin>>s2;
    int n=s1.size();
    string ans;
    for(int i=0;i<n;i++){
        int bit1=int(s1[i]);
        int bit2=int(s2[i]);
        ans+=to_string(bit1^bit2);
    }
    cout<<ans;
    return 0;
}