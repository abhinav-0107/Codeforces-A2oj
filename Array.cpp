#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int num[n];
    vector <int> num1;
    vector <int> num2;
    vector <int> num3;
    int neg=0;
    for (int i = 0; i < n; i++){
        cin>>num[i];
        if(num[i]<0){
            num1.push_back(num[i]);
            neg++;
        }
        else if(num[i]>0){
            num2.push_back(num[i]);
        }
        else{
            num3.push_back(num[i]);
        }
    }
    if(neg%2==0){
        int c=num1[num1.size()-1];
        num1.pop_back();
        num3.push_back(c);
    }
    if(num2.size()==0){
        int a=num1[num1.size()-1];
        num2.push_back(a);
        num1.pop_back();
        int b=num1[num1.size()-1];
        num2.push_back(b);
        num1.pop_back();
    }
    cout<<num1.size()<<" ";
    for (int i = 0; i < num1.size(); i++){
        cout<<num1[i]<<" ";
    }
    cout<<endl;
    cout<<num2.size()<<" ";
    for (int i = 0; i < num2.size(); i++){
        cout<<num2[i]<<" ";
    }
    cout<<endl;
    cout<<num3.size()<<" ";
    for (int i = 0; i < num3.size(); i++){
        cout<<num3[i]<<" ";
    }
    
    return 0;
}