#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int req=n-10;
    if(req==10){
        cout<<15;
    }
    else if (req==0){
        cout<<0;
    }
    else if ( 0<req && req<=11){
        cout<<4;
    }
    else{
        cout<<0;
    }
    
    return 0;
}