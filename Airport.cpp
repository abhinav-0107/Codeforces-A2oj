#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    multiset<int,greater<int>> max;
    multiset<int> min;
    for (int i = 0; i < m; i++){
        int k;
        cin>>k;
        max.insert(k);
        min.insert(k);
    }
    int total=0;

    for (int i = n ; i > 0 ; i--){
        int x=*max.begin(); // max.begin() returns an itrator to the first element of the multiset!
        total+=x;
        max.erase(max.lower_bound(x));
        x--;
        if(x>0){
            max.insert(x);
        }
    }
    cout<<total<<" ";

    total=0;
    for (int i = 0; i < n; i++){
        int y=*min.begin();
        total+=y;
        min.erase(min.lower_bound(y));
        y--;
        if(y>0){
            min.insert(y);
        }
    }
    cout<<total;

    return 0;
}