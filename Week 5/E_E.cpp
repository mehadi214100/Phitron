#include <bits/stdc++.h>
#define ll long long int
#define fl(i, n) for (int i = 0; i < n; i++)
#define sy cout << "YES\n"
#define sn cout << "NO\n"
#define nl cout << '\n'
#define sp " "
using namespace std;

int main() {
    int t;cin>>t;
    while (t--)
    {
        int n;cin>>n;
        int OM=0;
        int ct = 0;
        for (int i = 0; i < n; i++)
        {
            int x;cin>>x;
            if(x==0){
                OM = max(OM,ct);
                ct = 0;
            }else{
                ct++;
            }
        }
        OM = max(OM,ct);
        int addy=0;
        int ct2 = 0;
        for (int i = 0; i < n; i++)
        {
            int x;cin>>x;
            if(x==0){
                addy = max(addy,ct2);
                ct2 = 0;
            }else{
                ct2++;
            }
        }
        addy = max(addy,ct2);
       if(addy==OM) cout<<"Draw"<<endl;
       else if(addy>OM) cout<<"Addy"<<endl;
       else cout<<"Om"<<endl;

    }
    
    return 0;
}

