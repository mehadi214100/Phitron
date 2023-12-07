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
        int n,H;
        cin >> n>>H;
        int arr[n];
        for(int i= 0;i<n;i++) cin >> arr[i];
        sort(arr,arr+n,greater<int>());
        int ct = 0;
        int sum = arr[0]+arr[1];
        if(H%sum==0){
            cout << (H/sum) *2<< endl;
        }else{
            int mx =  (H/sum) *2;
            
            if((H%sum)<=arr[0]) cout << mx+1<< endl;
            else cout << mx+2<< endl;
        }
    }

    return 0;
}