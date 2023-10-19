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
        int n;cin>>n;
        int curr = 0;
        int i = 1;
        while (true)
        {
           curr = 1<<i;
           if(curr>n){
                curr = curr>>1;
                break;
           }
           i++;
        }
        cout<<curr-1<<endl;
        
    }
    
    return 0;
}


