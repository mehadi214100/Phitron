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
    // cin>>t;
    while (t--)
    {
        int n,k;cin>>n>>k;
        int a[n],b[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin>>b[i];
        }
        ll l=0,r=INT_MAX,ans;
        while (l<=r)
        {
           ll value = l+(r-l)/2;
           ll ct = 0;
           ll remain = k;
           for (int i = 0; i < n; i++)
           {
                ll divide = b[i]/a[i];
                if(divide==value){
                    ct++;
                }else{
                    
                    if(value<divide){
                        ct++;
                    }else{
                        ll lagbe = (a[i]*value)-b[i];
                        if(remain>=lagbe){
                            ct++;
                            remain -= lagbe;
                        }
                    }
                }
           }
           if(ct==n){
                l = value+1;
                ans = value;
           }else{
                r = value-1;
           }
           
        }
        cout<<ans<<endl;
           
    }
    
    return 0;
}