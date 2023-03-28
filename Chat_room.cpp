#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    string s1;
    cin>>s1;
    string s2="hello";
    int i = 0;
    int j = 0;
    int flag=0;
    while (i < s1.size()){
        if(s2[j]==s1[i] && j<5){
            j++;
            i++;
            flag++;
        }
        else{
            i++;
        }
    }
    if(flag==5){
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}