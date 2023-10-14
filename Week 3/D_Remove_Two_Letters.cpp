#include <bits/stdc++.h>
#define ll long long int
#define fl(i, n) for (int i = 0; i < n; i++)
#define sy cout << "YES\n"
#define sn cout << "NO\n"
#define se cout << '\n'
#define sp " "
using namespace std;

int main() {
    int t;cin>>t;
    while (t--)
    {
        int n;cin>>n;
        string s;cin>>s;
        vector<string>vc;
        for (int i = 0; i < n-1; i++)
        {
            string ss="";
            for (int j = 0; j < i; j++)
            {
                ss+=s[j];
            }
            for (int j = i+2; j < n; j++)
            {
                ss+=s[j];
            }
            vc.push_back(ss);
        }
        int ct = 0;
        string current = vc[0];
        sort(vc.begin(),vc.end());

        for (int i = 0; i < vc.size(); i++)
        {
            if(vc[i]!=current){
                ct++;
                current = vc[i];
            }
        }
        if(ct==0) ct++;
        cout<<ct;

        cout<<endl;
        
    }
    


    return 0;
}


