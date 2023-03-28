#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin>>s;
    int flag=1;
    int i=0;
    while(i<s.size()){
        if(s[i]=='1' && s[i+1]=='4' && s[i+2]=='4'){
            i+=3;
        }
        else if(s[i]=='1' && s[i+1]=='4'){
            i+=2;
        }
        else if(s[i]=='1'){
            i++;
        }
        else{
            flag=0;
            i++;
        }
    }
    if(flag){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}