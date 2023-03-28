#include<iostream>
#include<bits/stdc++.h>
#include<string>

using namespace std;

int main(){
    string str;
    cin>>str;
    set<int>s;
    while (1){
        int year=stoi(str);
        year++;
        str=to_string(year);
        for (int i = 0 ; i < 4; i++){
            s.insert(str[i]);
        }
        if(s.size()==4){
            cout<<str;
            return 0;
        }
        s.clear();
    }
}