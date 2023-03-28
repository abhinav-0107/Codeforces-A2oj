#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int num[n];
    for (int i = 0; i < n; i++){
        cin>>num[i];  
    }
    int count=0;
    int countpre=0;
    int max=0;
    for (int i = 0; i < n; i++){
        for (int j = i; j < n; j++){
            for (int k = 0; k < n ; k++){;
                if(i<=k  && k<=j){
                    count+=1-num[k];
                }
                else{
                    count+=num[k];
                }   
            }
            if(count>max){
                max=count;
            }
            count=0;
        }
    }
    cout<<max;
    
    return 0;
}