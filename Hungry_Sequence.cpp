#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int count=0;
    int i=1;
    while (count!=n){
        cout<<n+i<<" ";
        i++;
        count++;   
    }
    return 0;
}