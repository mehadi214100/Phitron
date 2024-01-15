#include <bits/stdc++.h>
#define ll long long int
#define fl(i, n) for (int i = 0; i < n; i++)
#define sy cout << "YES\n"
#define sn cout << "NO\n"
#define se cout << '\n'
#define sp " "
using namespace std;

int secondHighestDivisor(int n) {
    // Store divisors in a vector
    vector<int> divisors;

    // Find divisors up to square root of n
    for (int i = 1; i <= sqrt(n); ++i) {
        if (n % i == 0) {
            divisors.push_back(i);
            if (n / i != i) {
                divisors.push_back(n / i);
            }
        }
    }

    // Sort the divisors in descending order
    sort(divisors.rbegin(), divisors.rend());

    // Find the second highest divisor
    if (divisors.size() >= 2) {
        return divisors[2];
    } else {
        return -1; // No second divisor found
    }
}


int main() {
    int t = 1;
    cin>>t;
    while (t--)
    {
        ll a,b;  cin>>a>>b;
        ll mx = max(a,b);
        ll mn = min(a,b);
        ll value = mx;
        
        while (true)
        {
            value = value+mx;
            if(value%mn==0){
                int snd = secondHighestDivisor(value);
                if(snd==mn){
                    cout<<value<<endl;
                    break;
                }
            
            }
        }
           
    }
    
    return 0;
}