#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    string s1,s2;
    cin>>s1>>s2;
    int i=0,j=s1.size()-1;
    while(j>=i){
        swap(s1[i],s1[j]);
        i++;
        j--;
    }
    if(s1==s2){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}