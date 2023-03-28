#include<iostream>
#include<bits/stdc++.h>

using namespace std;

bool isPrime(int m){
    for (int i = 2; i < m; i++){
        if(m%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    int n,m;
    cin>>n>>m;
    while (1){
        n++;
        if(isPrime(n) && n==m){
            cout<<"YES";
            return 0;
        }
        else if(isPrime(n) && n!=m){
            cout<<"NO";
            return 0;
        }
    }
    return 0;
}