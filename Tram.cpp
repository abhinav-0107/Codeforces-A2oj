#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int max=0;
    int current=0;
    int a,b;
    for(int i=1;i<=n;i++){
        cin>>a>>b;
        current+=(b-a);
        if(current>max){
            max=current;
        }
    }
    cout<<max;
    return 0;
}
