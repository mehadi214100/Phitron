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
        string s;
        cin>>s;
        string s1= "";
        string s2= "";
        s1+=s[0];
        if(s[1]=='0'){
            int i = 1;
            for (i; i < s.length(); i++)
            {
                
                if(s[i]!='0') break;
                else{
                    s1+=s[i];
                }
            }
            for ( i; i < s.length(); i++)
            {
                s2+= s[i];
            }
            
        }
        else{
            for (int i = 1; i < s.length(); i++)
            {
                s2+= s[i];
            }
            
        }

        
        if(s2.length()==0) cout<<-1<<endl;
        else{
            int n1 = stoi(s1);
            int n2 = stoi(s2);
            if(n2>n1) cout<<n1<<sp<<n2<<endl;
            else cout<<-1<<endl;
        }
        
        
        

        
    }
    
    return 0;
}