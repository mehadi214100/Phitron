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
        int n;cin>>n;
        string s1,s2;
        cin>>s1>>s2;
        string r1 = "";
        string r2 = "";
        int r11 = 0;
        int r10 = 0;
        int r21 = 0;
        int r20 = 0;
        for (int i = 0; i < n; i++)
        {
            if(s1[i]!=s2[i]){
                r1 += s1[i];
                r2 += s2[i];
                if(s1[i]=='1')r11++;
                if(s1[i]=='0')r10++;
                if(s2[i]=='1')r21++;
                if(s2[i]=='0')r20++;
            }
        }
       
        // cout<<r1<<endl<<r2<<endl;
        // cout<<r11<<sp<<r10<<sp<<r21<<sp<<r20<<endl;
        // while (true)
        // {
        //     if(r11==0 && r20==0) break;
        //     else{
        //         r11--;
        //         r20--;
        //         ct++;
        //     }
        // }
        // while (true)
        // {
        //     if(r10==0 && r21==0) break;
        //     else{
        //         r10--;
        //         r21--;
        //         ct++;
        //     }
        // }
        int sz = r1.size();
        int ct = min(r11,r21);
        int res = sz - ct;
        cout<<res<<endl;
        

        
    }
    
    return 0;
}