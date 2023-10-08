#include <bits/stdc++.h>
#define ll long long int
#define fl(i, n) for (int i = 0; i < n; i++)
#define sy cout << "YES\n"
#define sn cout << "NO\n"
#define se cout << '\n'
#define sp " "
using namespace std;

int main() {
    int k;cin>>k;
    int sum = 0;
    for (int i = 1; i <= k; i++)
    {
        for (int j = 1; j <= k; j++)
        {
            for (int x = 1; x <= k; x++)
            {
                int temp = __gcd(i,j);
                sum+= __gcd(temp,x);
            }
            
        }
        
    }
    cout<<sum;
    
    return 0;
}


