#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    string s1,s2;
    cin>>s1>>s2;
    int diff=0;
    vector <int> index;
    if(s1.size()==s2.size()){
        for (int i = 0; i < s1.size(); i++){
            if(s1[i]!=s2[i]){
                diff++;
                index.push_back(i);
            }
        }
        if(diff==2){
            if(s1[index[0]]==s2[index[1]] && s1[index[1]]==s2[index[0]]){
                cout<<"YES";
            }
            else{
                cout<<"NO";
            }
        }
        else{
            cout<<"NO";
        }
    }
    else{
        cout<<"NO";
    }

    
    return 0;
}