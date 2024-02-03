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
        int n,k;
        cin>>n>>k;
        int arr[n];
        string s="";
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
            
            if(arr[i]%k==0)s+='1';
            else s+='0';
        }
        cout<<s<<endl;
    }
    
    return 0;
}