#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;cin>>t;
    while (t--)
    {
        int n;cin>>n;
        string s;cin>>s;
        int ct = 0;
        map<char,int>m;
        for (int i = 0; i < n; i++)
        {
           if(m[s[i]]==0) ct+= 2;
           else ct+=1;
           m[s[i]]= 1;
        }
        cout<<ct<<endl;
        
    }
    
    return 0;
}


