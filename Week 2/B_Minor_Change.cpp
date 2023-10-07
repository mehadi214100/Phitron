#include <bits/stdc++.h>
#define ll long long int
#define fl(i, n) for (int i = 0; i < n; i++)
#define sy cout << "YES\n"
#define sn cout << "NO\n"
#define se cout << '\n'
#define sp " "
using namespace std;

int main() {
    string s1,s2;cin>>s1>>s2;
    int res = 0;
    for (int i = 0; i < s1.length(); i++)
    {
        if(s1[i]!=s2[i]){
            res++;
        }
    }
    cout<<res;
    

    return 0;
}


