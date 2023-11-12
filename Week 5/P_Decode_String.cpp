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
        string s; cin>>s;
        string res = "";
        for (int i = n-1; i >=0; i--)
        {
           if(s[i]!='0'){
                int num = s[i]-'0';
                char c = 'a'+num-1;
                res += c;
           }else{
                char c1 = s[i-1];
                char c2 = s[i-2];
                
                int num1 = c2-'0';
                int num2 = c1-'0';
                int num = (num1*10)+num2;
                char c = 'a'+num-1;
                res += c;
                i-=2;
           }
        }
        reverse(res.begin(),res.end());
        cout<<res<<endl;
    }
    
    return 0;
}


