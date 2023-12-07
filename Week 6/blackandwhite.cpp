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
        int n,k;
        cin>>n>>k;
        string s;
        cin >> s;
        int i = 0, j = 0;
        int white = 0;
        int res = INT_MAX;
        while (j < n)
        {
            if(j<=k-1){
                if(s[j]=='W'){
                    white++;
                }
            }else{
                res = min(res,white);
                if(s[j]=='W') white++;
                if(s[i]=='W') white--;
                i++;
            }
            j++;
        }
        res = min(res,white);
        cout << res << endl;



    }

    return 0;
}