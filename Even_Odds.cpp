#include<iostream>
#include<bits/stdc++.h>

using namespace std;

// int main(){
//     long long int n,k;
//     cin>>n>>k;
//     long long int pos=0;
//     for(long long int i=1;i<=n;i+=2){
//         pos++;
//         if(pos==k){
//             cout<<i;
//             return 0;
//         }
//     }
//     for(long long int i=2;i<=n;i+=2){
//         pos++;
//         if(pos==k){
//             cout<<i;
//             return 0;
//         }
//     }
//     return 0;
// }

int main(){
    long long int n,k;
    cin>>n>>k;
    if(k<=(n+1)/2){
        cout<<(2*k-1);
    }
    else{
        cout<<(k-(n+1)/2)*2;
    }
    return 0;
}