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
        ll n,f,a,b;
        cin>>n>>f>>a>>b;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        ll position = 0;
        ll remaincharge = f;
        for (int i = 0; i < n; i++)
        {
            ll op1 = abs(arr[i]-position)*a;
            ll op2 = b;
            ll bestoption = min(op1,op2);
            remaincharge -= bestoption;
            position = arr[i];
        }
        if(remaincharge>0)sy;
        else sn;
        
    }
    
    return 0;
}