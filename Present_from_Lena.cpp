#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    for(int row=-n;row<=n;row++){
        for (int spaces=1; spaces <= 2*abs(row) ; spaces++){
            cout<<" ";
        }
        for (int num = 0; num < n-abs(row) ; num++){
            cout<<num;
            cout<<" ";
        }
        for (int num = n-abs(row); num > 0 ; num--){
            cout<<num;
            cout<<" ";
        }
        cout<<0;
        cout<<endl;
    }
    return 0;
}