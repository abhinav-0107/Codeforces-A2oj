#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b;
    c=a+b;
    string as=to_string(a);
    string bs=to_string(b);
    string cs=to_string(c);
    string ansa="",ansb="",ansc="";
    for (int i = 0; i < as.size(); i++){
        if(as[i]!='0'){
            ansa+=as[i];
        }
    }
    for (int i = 0; i < bs.size(); i++){
        if(bs[i]!='0'){
            ansb+=bs[i];
        }
    }
    for (int i = 0; i < cs.size(); i++){
        if(cs[i]!='0'){
            ansc+=cs[i];
        }
    }
    int x=stoi(ansa);
    int y=stoi(ansb);
    int z=stoi(ansc);
    if(a+b==c && x+y==z){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

    
    return 0;
}