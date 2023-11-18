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
        int n;
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        int sarr[n];
        sarr[0] = 0;
        
        int seq = 0;
        for (int i = 0; i < n-1; i++)
        {
            if((arr[i]%2==0 && arr[i+1]%2==0)|| (arr[i]%2==1 && arr[i+1]%2==1)){
                sarr[i+1] = arr[i];
            }else{
                sarr[i+1] = sarr[i]+arr[i];
            }
        }

        for (int i = 0; i < n; i++)
        {
            cout<<sarr[i]<<sp;
        }
        cout<<endl;
        
        
    }
    
    return 0;
}


