#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int x,y,z;
    int count=0;
    for(int i=1;i<=n;i++){
        cin>>x;
        cin>>y;
        cin>>z;
        int sum=x+y+z;
        if(sum>=2){
            count++;
        }
        sum=0;
    }
    cout<<count;
    return 0;
}
