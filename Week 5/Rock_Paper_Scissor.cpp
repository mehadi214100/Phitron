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
        int n;
        cin>>n;
        int chef=0,fri=0;
        string A,B;
        cin>>A;
        cin>>B;
        for (int i = 0; i < n; i++)
        {
            if((A[i]=='R' && B[i]=='S')||(A[i]=='S' && B[i]=='P')||(A[i]=='P' && B[i]=='R')){
                chef++;
            }else if((B[i]=='R' && A[i]=='S')||(B[i]=='S' && A[i]=='P')||(B[i]=='P' && A[i]=='R')){
                fri++;
            }
        }
        // cout<<chef<<sp<<fri<<endl;
        if(chef>fri) cout<<0<<endl;
        else if(chef==fri) cout<<1<<endl;
        else {
            int res = 0;
            while (chef<=fri)
            {
                chef++;
                fri--;
                res++;
            }
            cout<<res<<endl;

        }
    }
    
    return 0;
}


