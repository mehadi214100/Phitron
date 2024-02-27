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
        int n;cin>>n;
        set<int>s;
        for (int i = 0; i < n; i++){
            int ct = 0;
            for (int j = 0; j < n; j++)
            {
                char c;cin>>c;
                if(c=='1'){
                    ct++;
                }
            }
            if(ct!=0)s.insert(ct);
            
        }
        
       
        if(s.size()==1)cout<<"SQUARE"<<endl;
        else cout<<"TRIANGLE"<<endl;

            
        
              
    }
    
    return 0;
}