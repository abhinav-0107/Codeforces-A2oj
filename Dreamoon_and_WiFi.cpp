#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    string s1,s2;
    cin>>s1>>s2;
    int f1=0,f2=0;
    for (int i = 0; i < s1.size(); i++){
        if(s1[i]=='-'){
            f1--;
        }
        if(s1[i]=='+'){
            f1++;
        }
    }
    int count=0;
    for (int i = 0; i < s2.size(); i++){
        if(s2[i]=='?'){
            count++;
        }
        if(s2[i]=='-'){
            f2--;
        }
        if(s2[i]=='+'){
            f2++;
        }
    }
    if(f1==f2 && count==0){
        cout<<1.0;
        return 0;
    }
    int cases=pow(2,count);
    int x=0;
    cout<<cases<<" ";
    cout<<count<<" ";

    for (int i = count; i >= -count; i-=2){
        if(f2+i==f1){
            if(i==count || i==-count){
                x++;
            }
            else{
                x+=count;
            }
        }
    }
    cout<<x<<" ";
    double ans= (double)x/cases;
    cout<<ans;
    return 0;
}