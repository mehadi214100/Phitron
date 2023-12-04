#include <bits/stdc++.h>
#define ll long long int
#define fl(i, n) for (int i = 0; i < n; i++)
#define sy cout << "YES\n"
#define sn cout << "NO\n"
#define se cout << '\n'
#define sp " "
using namespace std;

int main() {
    int n;cin>>n;int arr[n];
    fl(i,n)cin>>arr[i];
    sort(arr,arr+n);
    int mn = INT_MAX;
   int i= 0;
   int j = n-1;
   int op1 = arr[j]-arr[i];
   int op2 = arr[j-1]-arr[i];
   int op3 = arr[j]-arr[i+1];
   int res1 = min(op1,op2);
   int res = min(res1,op3);
   if(n==0) cout<<0;
   else cout<<res;
   
    

    return 0;
}