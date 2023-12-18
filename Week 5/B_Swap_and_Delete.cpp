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
        int size = s.length();
        int onezero = 0;
        int zero = 0;
        int one = 0;
        for (int i = 0; i < size; i++)
        {
            if(s[i]=='0')zero++;
            else one++;
        }
        int ans= 0;
        for (int i = 0; i < size; i++)
        {
            if(s[i]=='0' && one<1) break;
            if(s[i]=='1' && zero<1) break;
            
            if(s[i]=='0' && one>0){
                ans++;
                one--;
            }else if(s[i]=='1' && zero>0){
                ans ++;
                zero--;
            }
        }
        cout<<abs(size-ans)<<endl;


        
        
        
    }
    
    return 0;
}