#include <bits/stdc++.h>
#define ll long long int
#define fl(i, n) for (int i = 0; i < n; i++)
#define sy cout << "YES\n"
#define sn cout << "NO\n"
#define se cout << '\n'
#define sp " "
using namespace std;

int main() {
    int k,s;
    cin>>k>>s;
    int ct = 0;
    
    for (int x = 0; x <= k; x++)
    {
        int y= 0,z=k;
        while (x+y+z !=s && y<=z)
        {
            if(x+y+z>s ){
                z--;
            }else if(x+y+z<s){
                y++;
            }
        }
        ct += z-y+1;
        // cout<<x<<" "<<y<<sp<<z<<sp<<ct<<endl;

        
    }

    cout<<ct;
    
    return 0;
}





