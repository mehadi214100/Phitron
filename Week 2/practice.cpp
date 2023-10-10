#include <bits/stdc++.h>
#define ll long long int
#define fl(i, n) for (int i = 0; i < n; i++)
#define sy cout << "YES\n"
#define sn cout << "NO\n"
#define se cout << '\n'
#define sp " "
using namespace std;

int main() {
    int n;cin>>n;
    int arr[n];
    fl(i,n) cin>>arr[i];
    int k;cin>>k;
    map<int,int>m;
    int i = 0;
    int sum = 0;
    int mx = 0;
    m[0] = -1;
    while (i<n)
    {
        sum+= arr[i];
        
        if(m.find(sum-k)!=m.end()){
            mx = max(mx,i-m[sum-k]);
        }
        if(m.find(sum) == m.end()){
            m[sum] = i;
        }
        i++;
    }
    cout<<mx;
    return 0;
}


