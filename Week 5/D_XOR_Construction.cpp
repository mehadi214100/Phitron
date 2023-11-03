#include <bits/stdc++.h>
#define ll long long int
#define fl(i, n) for (int i = 0; i < n; i++)
#define sy cout << "YES\n"
#define sn cout << "NO\n"
#define se cout << '\n'
#define sp " "
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n-1];
    for (int  i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    vector<int>v;
    v.push_back(arr[n-2]^0);
    v.push_back(0);
    int x = 0 ;
    
    for (int i = n-3; i>=0; i--)
    {
        int res = (x ^ arr[i]);
        v.push_back(res);
        x = res;
    }
    reverse(v.begin(),v.end());
    for(int value:v){
        cout<<value<<sp;
    }

    return 0;
}


