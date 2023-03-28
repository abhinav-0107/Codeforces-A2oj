#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin>>s;  //s.size()<=100
    int flag=0;
    for( int i = 0 ; i < s.size() ; i++ ){
        for (int j = i+1 ; j < i+7 ; j++){
            if(s[j]==s[i]){
                flag=1;
            }
            else{
                flag=0;
                break;
            }
        }
        if(flag==1){
            break;
        }
    }
    if(flag==1){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}
    