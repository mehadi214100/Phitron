#include <bits/stdc++.h>
using namespace std;

int main() {
    float a,b, t;
    cin>>a>>b>>t;
    t += 0.5;
    int ct = 0;
    int i = 1;
    int time = a;
    while (true)
    {
       
       time = a*i;
       if(time<=t){
        ct+=b;
       }else {
        break;
       }
       i++;

    }
    cout<<ct;
    return 0;
}


