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
    ll sum = 0;
    vector<int> odd;
    int ct = 0;
    ll odd_sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        if(arr[i]%2==0){
            sum += arr[i];
        }else{
            ct++;
            odd.push_back(arr[i]);
            odd_sum+=arr[i];
        }
    }
    if(ct%2==0){
        ll res = sum+odd_sum;
        cout<<res;
    }else{
        sort(odd.begin(),odd.end());
        odd_sum -= odd[0];
        ll res = sum+odd_sum;
        cout<<res;
    }

    return 0;
}


