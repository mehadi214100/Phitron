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

    for (int i = 0; i<(1<<n); i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            int mask = 1<<j;
            if((i&mask)==0){
                sum += arr[j];
            }else{
                sum -= arr[j];
            }
        }
        if(sum%360==0){
            cout<<"YES";
            return 0;
        }
        
    }
    cout<<"NO";
    
    return 0;
}


