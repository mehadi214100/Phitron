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
    // cin>>t;
    while (t--)
    {
        int n,k;cin>>n>>k;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        for (int i = 0; i < n; i++)
        {
            while (k--)
            {
               i++;
            }
            if(i==0){
                if(arr[i]==1) cout<<-1;
                else cout<<arr[i]-1;
                break;
            }
            if(arr[i-1]==arr[i]) cout<<-1;
            else cout<<arr[i-1];
            break;
        }
        
    }
    
    return 0;
}