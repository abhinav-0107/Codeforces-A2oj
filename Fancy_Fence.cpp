#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int t,a;
    cin>>t;
    vector <string> ans;
    
    while (t--){
        cin>>a;
        if(360%(180-a)==0){
            ans.push_back("YES");
        }
        else{
            ans.push_back("NO");
        }
    }

    for (int i = 0; i < ans.size(); i++){
        cout<<ans[i]<<endl;
    }
    
    return 0;
}
