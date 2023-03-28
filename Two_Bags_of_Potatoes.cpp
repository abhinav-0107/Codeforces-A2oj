#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    long long int y,k,n;
    cin>>y>>k>>n;
    long long int max_x=n-y;
    long long int min_x=k-y%k;
    long long int count=0;

    for ( long long int x = min_x; x <= max_x;){
        if((x+y)%k==0){
            cout<<x<<" ";
            count++;
            x+=k;
        }
        else{
            x++;
        }
    }
    if(count==0){
        cout<<-1;
    }
    return 0;
}