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
        string arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        int ct = 0;
        for (int i = 0; i < n-1; i++)
        {
            string s1 = arr[i];
          
            for (int j = i+1; j < n; j++)
            {
                string s2 = arr[j];
                string sss = s1+s2;

                if(s1[0]==s2[0] && s1[1]!=s2[1]){
                   ct++;
                }else if(s1[0]==s2[1] && s1[1]!=s2[0]){
                    ct++;
                }else if(s1[1]==s2[0] && s1[0]!=s2[1]){
                   ct++;
                }else if(s1[1]==s2[1] && s1[0]!=s2[0]){
                    ct++;
                }
                
            }
            
        }
        
        cout<<ct<<endl;
    }
    
    return 0;
}


