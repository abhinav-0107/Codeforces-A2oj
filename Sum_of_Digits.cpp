#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int func(int n){
    int sum=0;
    while (n>0){
        sum+=n%10;
        n/=10;
    }
    return sum;
}

int main(){
    string n;
    cin>>n;
    int sum=0;
    if(n.size()!=1){
        for (int i = 0; i < n.size(); i++){
            sum+=(n[i]-'0');   
        }
        int count=1;
        if(sum<10){
            cout<<1;
        }
        else{
            while (sum>=10){
                sum=func(sum);
                count++;
            }
            cout<<count;
        }
    }
    else{
        cout<<0;
    }
    return 0;
}
