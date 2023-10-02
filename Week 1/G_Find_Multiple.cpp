#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b,c;cin>>a>>b>>c;
    int ct = 0;
    for (int i = a; i <= b; i++)
    {
        if(i%c==0){
            ct=i;
            break;
        }
    }
    if(ct!=0) cout<<ct;
    else cout <<-1;
    
    return 0;
}


