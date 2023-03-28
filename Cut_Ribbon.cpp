#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,a,b,c;
    cin>>n>>a>>b>>c;
    int i,j,k;
    int ans=0;

        for (int i = 0; i <= n ; i++){
            for (int j = 0; j <=n; j++){
                int ck=(n-(a*i+b*j));
                if(ck>=0){
                    float k= (ck)/((float)c);
                    if(k==(int)k){
                        ans=max(ans,(int)(i+j+k));
                    }
                }
                else
                {
                    break;
                }
                      
            }
        }
        cout<<ans;

    return 0;
}