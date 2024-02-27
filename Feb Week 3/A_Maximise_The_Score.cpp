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
        int arr[n*2];
        for (int i = 0; i < (n*2); i++)
        {
            cin>>arr[i];
        }
        n = n*2;
        sort(arr,arr+n);
        int sum = 0;
        for (int i = n-2; i >= 0; i-=2)
        {
            sum += arr[i];

        }
        cout<<sum<<endl;
        
    }
    
    return 0;
}