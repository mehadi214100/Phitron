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
        int d = (1<<31)-1;
        int arr[n];
        map<int,int>m;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
            int temp = arr[i]^d;
            if(m[arr[i]]==0){
                ans++;
                m[temp] ++;
            }else{
                m[arr[i]]--;
            }
        }
        
        cout<<ans<<endl;
    }
    
    return 0;
}