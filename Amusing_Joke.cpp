#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    string s12=s1+s2;
    sort(s3.begin(),s3.end());
    sort(s12.begin(),s12.end());
    if(s3==s12){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}
