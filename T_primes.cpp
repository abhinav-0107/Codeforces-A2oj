#include<iostream>
#include<bits/stdc++.h>

using namespace std;

bool isprime(long long int n){
    if(n==1 || n==2){
        return true;
    }
    for (long long int i = 2; i*i <= n ; i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    long long int n;
    cin>>n; 
    long long int num[n];
    for (long long int i = 0; i < n; i++){
        cin>>num[i];
        if(num[i]==1 || num[i]==2){
            cout<<"NO"<<endl;
        }
        else{
            long double s=sqrt(num[i]);
            if(s-floor(s)==0){
                if(isprime(sqrt(num[i]))){
                    cout<<"YES"<<endl;
                }
                else{
                    cout<<"NO"<<endl;
                }
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}