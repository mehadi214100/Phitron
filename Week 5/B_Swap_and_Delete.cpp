#include <bits/stdc++.h>
#define ll long long int
#define fl(i, n) for (int i = 0; i < n; i++)
#define sy cout << "YES\n"
#define sn cout << "NO\n"
#define se cout << '\n'
#define sp " "
using namespace std;

int main() {
    int t = 1;
    cin>>t;
    while (t--)
    {
         string s;cin>>s;
         int zero=0,one=0;
         for(int i=0;i<s.length();i++){
            if(s[i]=='0')zero++;
            else one++;
        } 
        for(int i=0;i<s.length();i++){
            if(s[i]=='0'){
                if(one>0) one--;
                else break;
            }else{
                if(zero>0) zero--;
                else break;
            }
        }
        cout<<zero+one<<endl;
    }
    
    return 0;
}