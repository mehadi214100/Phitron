#include <bits/stdc++.h>
#define ll long long int
#define fl(i, n) for (int i = 0; i < n; i++)
#define sy cout << "YES\n"
#define sn cout << "NO\n"
#define se cout << '\n'
#define sp " "
using namespace std;

int getsum(int n){
        int sum = 0;
        while (n>0)
        {
           sum += n%10;
           n/=10;
        }
        return sum;
}

int main() {
    int t;cin>>t;
    while (t--)
    {
        int x,k; cin>>x>>k;
        int n = x;
        while (true)
        {
            int sum = getsum(n);
            if(sum%k==0){
                cout<<n<<endl;
                break;
            }
            else{
                n++;
            }
        }
        
        
    }
    
    return 0;
}


