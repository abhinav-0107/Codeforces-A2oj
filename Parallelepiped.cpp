#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int lb,bh,hl;
    cin>>lb>>bh>>hl;
    int l=sqrt((lb*hl)/bh);
    int b=sqrt((lb*bh)/hl);
    int h=sqrt((bh*hl)/lb);
    cout<<4*(l+b+h);
    return 0;
}