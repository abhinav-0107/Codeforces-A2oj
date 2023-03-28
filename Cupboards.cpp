#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<vector<int>> v;
    int l,r;
    int suml=0,sumr=0;
    int t=0;
    for(int i=1;i<=n;i++){
        cin>>l;
        cin>>r;
        suml+=l;
        sumr+=r;
        v.push_back({l,r});
    }
    if(sumr>floor(n/2)){
        t+=n-sumr;
    }
    else{
        t+=sumr;
    }
    if(suml<=floor(n/2)){
        t+=suml;
    }
    else{
        t+=n-suml;
    }

    cout<<t;

    return 0;
}