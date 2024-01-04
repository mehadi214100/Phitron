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
    // cin>>t;
    while (t--)
    {
        int n;
        ll s;
        cin>>n>>s;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        
        ll sum = 0;
        int i = 0,j = 0;
        ll res = 0;
        while (j<n)
        {
            sum += arr[j];
            
            if(sum<=s){
                res+= (j-i+1);
            }

            while (sum>s)
            {
                sum-= arr[i];
                i++;
                if(sum<=s){
                    res+= (j-i+1);
                }
            }
            
           j++;
           
        }
        cout<<res<<endl;
        
    }
    
    return 0;
}