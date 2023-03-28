#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    int count25=0;
    int count50=0;
    for (int i = 0; i < n; i++){
        cin>>arr[i];
        if(arr[0]!=25){
            cout<<"NO";
            return 0;
        }
        if(arr[i]==25){
            count25++;
        }
        else if(arr[i]==50){
            if(count25>0){
                count50++;
                count25--;
            }
            else{
                cout<<"NO";
                return 0;
            }
        }
        else if(arr[i]==100){
            if(count50>=1 && count25>=1){
                count50--;
                count25--;
            }
            else if(count25>=3){
                count25-=3;
            }
            else{
                cout<<"NO";
                return 0;
            }
        }
    }
    cout<<"YES";

    
    return 0;
}