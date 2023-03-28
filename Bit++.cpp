#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int i=1;
    int x=0;
    while(i<=n){
        string s;
        cin>> s;
        for(int j=0;j<2;j++){
            if(s[j]=='+' && s[j+1]=='+'){
                x++;
            }
            else if(s[j]=='-' && s[j+1]=='-'){
                x--;
            }
        }
        i++;
    }
    cout<<x;
    return 0;
}