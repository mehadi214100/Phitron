#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;cin>>t;
    while (t--)
    {
        ll n,s;
        cin >> n>>s;
        ll v[n], w[n];
        for (ll i = 0; i < n; i++)
        {
            ll x,y;
            cin>>x>>y;
            v[i] = y;
            w[i] = x;
        }
        ll dp[n + 1][s + 1];
        for (ll i = 0; i <= n; i++)
        {
            for (ll j = 0; j <= s; j++)
            {
                if (i == 0 || j == 0)
                    dp[i][j] = 0;
            }
        }
        for (ll i = 1; i <= n; i++)
        {
            for (ll j = 1; j <= s; j++)
            {
                if (w[i - 1] <= j)
                {
                    dp[i][j] = max(v[i - 1] + dp[i - 1][j - w[i - 1]], dp[i - 1][j]);
                }
                else
                {
                    dp[i][j] = dp[i - 1][j];
                }
            }
        }

        cout<<dp[n][s]<<endl;
        }
    
    return 0;
}