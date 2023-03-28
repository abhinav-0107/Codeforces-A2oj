#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,t;
    string s;
    cin>>n;
    cin>>t;
    cin>>s;
    for(int j=1;j<=t;j++){
        int i=0;
        while (i<n-1){
            if(s[i]=='B'){
                if(s[i+1]=='G'){
                    int temp=s[i+1];
                    s[i+1]=s[i];
                    s[i]=temp;
                    i=i+2;
                }
                else if(s[i+1]=='B'){
                    i++;
                }
            }
            else if(s[i]=='G'){
                i++;
            }
        }
    }
    cout<<s;
    return 0;
}