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
        int n;int k;
        cin>>n>>k;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        int sz = 1e5+1;
        int fre[sz] = {0};
        int i=0,j=0;
        int unq = 0;
        ll ans=0;
        while (j<n)
        {   
            fre[arr[j]]++;
            if(fre[arr[j]]==1){
                unq++;
            }
            while (unq >k)
            {
                fre[arr[i]]--;
                if (fre[arr[i]] == 0)
                {
                    unq--;
                }
                i++;
            }
            ans += j-i+1;
            j++;
        }
        cout<<ans;

    }
    
    return 0;
}