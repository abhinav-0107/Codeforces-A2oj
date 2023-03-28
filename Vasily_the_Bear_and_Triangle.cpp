#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int x,y;
    cin>>x>>y;
    if(x>0 && y>0){
        cout<<0<<" "<<x+y<<" "<<x+y<<" "<<0;
    }
    else if(x<0 && y>0){
        cout<<-(abs(x)+abs(y))<<" "<<0<<" "<<0<<" "<<(abs(x)+abs(y));
    }
    else if(x>0 && y<0){
        cout<<0<<" "<<-(abs(x)+abs(y))<<" "<<(abs(x)+abs(y))<<" "<<0;    
    }
    else{
        cout<<-(abs(x)+abs(y))<<" "<<0<<" "<<0<<" "<<-(abs(x)+abs(y));
    }
    return 0;
}