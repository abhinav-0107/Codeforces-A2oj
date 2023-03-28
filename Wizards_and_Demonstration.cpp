#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,x,y;
    cin>>n>>x>>y;
    int min=ceil((float)(n*y)/100);   // min no of people that should be present in program
    int clone=min-x;
    if(clone>=0){
        cout<<clone;
    }
    else{
        cout<<0;
    }
    return 0;
}