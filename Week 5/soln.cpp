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
        string a="";
        string b="";
        a += s[0];
        if(s[1]=='0'){
            int i = 1;
            for(i;i<s.length();i++){
                if(s[i]!='0'){
                    break;
                }else{
                    a+=s[i];
                }
            }
            for(i;i<s.length();i++){
                b+= s[i];
            }

        }else{
            for(int i=1;i<s.length();i++){
                b+= s[i];
            }
        }
        if(b.length()==0) cout<<-1<<endl;
        else{
            int n1 = stoi(a);
            int n2 = stoi(b);
            if(n2>n1) cout<<n1<<sp<<n2<<endl;
            else cout<<-1<<endl;
        }
        

    }
    
    return 0;
}