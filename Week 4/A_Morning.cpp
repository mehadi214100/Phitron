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
        string s = "1234567890";
        string pin ;cin>>pin;
        int ct = 0;
        char fast = pin[0];
        char sec = pin[1];
        char thr = pin[2];
        char fou = pin[3];
        int pos1= s.find(fast);
        int pos2 = s.find(sec);
        int pos3 = s.find(thr);
        int pos4 = s.find(fou);
        int sum = pos1+abs(pos1-pos2)+abs(pos2-pos3)+abs(pos3-pos4);
        int res = sum +4;
        cout<<res<<endl;

        
    }
    
    return 0;
}


