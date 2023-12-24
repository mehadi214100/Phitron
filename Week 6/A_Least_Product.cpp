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
        int arr[n];
        int odd = 0;
        int idx = 0;
        int even = 0;
        bool check = false;
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
            if(arr[i]==0) check = true;
            else if(arr[i]<0){
                odd++;
                idx = i+1;
            }
        }
        if(check==true) cout<<0<<endl;
        else {
            int even = n-odd;
            if(even==n){
                cout<<1<<endl;
                cout<<1<<sp<<0<<endl;
            }else if(odd%2==1) cout<<0<<endl;
            else{
                cout<<1<<endl;
                cout<<idx<<sp<<0<<endl;
            }
        }

    }
    
    return 0;
}