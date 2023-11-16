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
        string s;cin>>s;
        char server = 'A';
        char receiver = 'B';
        int a = 0,b=0;
        for (int i = 0; i < n; i++)
        {
            if(s[i]==server){
                if(server=='A') a++;
                else b++;
            }else{
                if(server=='A'){
                    server = 'B';
                    receiver = 'A';
                }
                else{
                    server = 'A';
                    receiver = 'B';
                }
            }
        }
        cout<<a<<sp<<b<<endl;
        
    }
    
    return 0;
}


