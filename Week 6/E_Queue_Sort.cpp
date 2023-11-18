#include <bits/stdc++.h>
#define ll long long int
#define fl(i, n) for (int i = 0; i < n; i++)
#define sy cout << "YES\n"
#define sn cout << "NO\n"
#define se cout << '\n'
#define sp " "
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int arr[n];
        int mn = INT_MAX;
        int pos = -1;
        for (int i = 0; i < n; i++)
        {
           int x;cin>>x;
           arr[i] = x;
           if(x<mn){
                mn = x;
                pos = i;
           }
        }
        // cout<<pos<<sp<<mn<<endl;
        bool check = true;
        for (int i = pos; i < n-1; i++)
        {
            // cout<<arr[i]<<sp<<arr[i+1]<<endl;
            if(arr[i]>arr[i+1]){
                check = false;
                cout<<-1<<endl;
                break;
            }
        }
        if(check) cout<<pos<<endl;    
    }
    
    return 0;
}


