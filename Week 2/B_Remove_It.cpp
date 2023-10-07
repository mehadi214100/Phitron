#include <bits/stdc++.h>
#define ll long long int
#define fl(i, n) for (int i = 0; i < n; i++)
#define sy cout << "YES\n"
#define sn cout << "NO\n"
#define se cout << '\n'
#define sp " "
using namespace std;

int main() {
    int n,k;cin>>n>>k;int arr[n];
    fl(i,n) cin>>arr[i];
    fl(i,n){
        if(arr[i]!=k){
            cout<<arr[i]<<" ";
        }
    }
    return 0;
}


