#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    vector<vector<int>>teams;
    for (int i = 0; i < n; i++){
        int p,t;
        cin>>p>>t;
        teams.push_back({p,t});
    }

    sort(teams.begin(),teams.end(),greater<vector<int>>());

    for (int i = 0; i < n-1 ; i++){
        for (int j = 0; j < n-1-i ; j++){
            if (teams[j][0]==teams[j+1][0]){
                if (teams[j][1]>teams[j+1][1]){
                    vector<int> temp=teams[j+1];
                    teams[j+1]=teams[j];
                    teams[j]=temp;
                }
            }
        }
    }

    int pos=1;
    int count=0;
    int p,t;
    for (int i = 0; i < n; i++){
        if(pos==k){
            p=teams[i][0];
            t=teams[i][1];
            break;
        }
        pos++;
    }

    for (int i = 0; i < n; i++){
        if(p==teams[i][0] && t==teams[i][1]){
            count++;
        }
    }

    cout<<count;    
    return 0;
}