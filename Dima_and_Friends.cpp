#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n; 
    cin>>n;
    int arr[n];
    int sum=0;
    for (int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }                       // Total friends=3
    int pos=sum%(n+1);      // 1 2 3
                            // ? 3 5
    int noofways=0;
    for(int i=1;i<=5;i++){
        pos++;
        if(pos>n+1){
            pos=1;
        }
        else if(pos!=1){
            noofways++;
        }
    }
    cout<<noofways;                    
    return 0;
}