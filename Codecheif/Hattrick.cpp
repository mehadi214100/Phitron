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
        char arr[6];
        for (int i = 0; i < 6; i++)
        {
            cin>>arr[i];
        }
        bool ok = true;
        for (int i = 0; i <= 3; i++)
        {
            if(arr[i]=='W' && arr[i+1]=='W' && arr[i+2]=='W'){
                sy;
                ok = false;
                break;
            }
        }
        if(ok)sn;
    }
    
    return 0;
}