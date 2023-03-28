#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int drinks=(k*l)/nl; //drink per head
    int lime=c*d; //lime per head
    int salt=p/np;    //salt per head
    int ans=min(drinks,lime);
    ans=min(ans,salt);
    ans/=n;
    cout<<ans;
    return 0;
}