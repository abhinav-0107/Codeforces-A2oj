#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int index[n];
    for (int  i = 0; i < n; i++){
        cin>>index[i];
    }
    sort(index,index+n);
    int i;
    for (i = 0; i < n; i++){
        if(index[i]!=(i+1)){
            cout<<i+1;
            return 0;
        }
    }
    cout<<index[n-1]+1;
    return 0;
}