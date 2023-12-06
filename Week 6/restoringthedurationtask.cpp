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
        int n;cin >> n;
        int a[n],b[n];
        for(int i=0;i<n;i++) cin >> a[i];
        for(int i=0;i<n;i++) cin >> b[i];
        for(int i=0;i<n;i++){
            if(i==0){
                cout << b[i]-a[i]<< " ";
            }else{
                if(a[i]>=b[i-1]){
                     cout << b[i]-a[i]<< " ";
                }else{
                    cout <<b[i] -b[i-1]<< " ";
                }
            }
        }
        cout  << endl;
    }
    
    return 0;
}