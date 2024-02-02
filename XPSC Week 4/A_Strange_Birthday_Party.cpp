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
        int n,m;cin>>n>>m;
        int arr[n],arr2[m];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        for (int j = 0; j < m; j++)
        {
            cin>>arr2[j];
        }
        sort(arr,arr+n,greater<int>());
        ll sum=0;
        int j=0;
        int i = 0;
        for (i; i < n; i++)
        {
            if(j<m){
                if(arr2[arr[i]-1]<=arr2[j]){
                        sum += arr2[arr[i]-1];
                }else{
                   sum += arr2[j];
                   j++;
                }
            }else{
                break;
            }
        }
        for ( ; i < n; i++)
        {
            sum += arr2[arr[i]-1];
        }
        cout<<sum<<endl;
        
    }
    
    return 0;
}