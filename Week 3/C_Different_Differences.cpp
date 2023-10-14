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
        int k,n;
        cin>>k>>n;
        if(k==n){
            fl(i,n){
                cout<<i+1<<sp;
            }
        }else{
            cout<<1<<sp;
            int ct = 1;
            int sum = 1;
            int last = k-2;
            for (int i = 1; i <= last; i++)
            {
                int curent = sum+ct;
                int remain = last-i;
                if(curent+remain<n){
                    cout<<curent<<sp;
                    sum = curent;
                    ct+=1;
                }else{
                    cout<<sum+1<<sp;
                    sum++;
                }

            }
            cout<<n<<sp;
        }

        cout<<endl;
        
    }
    
    return 0;
}


