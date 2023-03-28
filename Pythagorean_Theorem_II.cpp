#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int count=0;
    int c;
    float temp;

    for (int a = 1; a <= n ; a++){
        for (int b = a; b <= n ; b++){
            temp=sqrt(a*a + b*b);
            if(temp-floor(temp)==0){
                int c= int(temp);
                for (int i = 1; i <= n && i>=a && i>=b ; i++){
                    if(c==i){
                        // cout<<a<<b<<c<<endl;
                        count++;
                    }
                }        
            }
        }
    }
    cout<<count;
    return 0;
}