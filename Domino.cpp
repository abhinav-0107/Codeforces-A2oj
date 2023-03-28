#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int suml=0,sumr=0;
    int l,r;
    vector<vector<int>> domino;
    for (int i = 0; i < n; i++){
        cin>>l>>r;
        suml+=l;
        sumr+=r;
        domino.push_back({l,r});
    }
    if(suml%2==0 && sumr%2==0 /* Both even*/){
        cout<<0;
    }
    else if((suml%2!=0 && sumr%2==0) || (suml%2==0 && sumr%2!=0) /*One is even and another is odd*/){
        cout<<-1;
    }
    else if(suml%2!=0 && sumr%2!=0 /*Both are odd!*/){
        for(int i=0;i<domino.size();i++){
            if((domino[i][0]%2==0 && domino[i][1]%2!=0) || (domino[i][0]%2!=0 && domino[i][1]%2==0)){
                cout<<1;
                return 0;
            }
        }
        cout<<-1;
    }
    return 0;
}