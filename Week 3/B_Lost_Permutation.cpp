#include <bits/stdc++.h>
#define ll long long int
#define fl(i, n) for (int i = 0; i < n; i++)
#define sy cout << "YES\n"
#define sn cout << "NO\n"
#define se cout << '\n'
#define sp " "
using namespace std;

int main() {
    int t;cin>>t;
    while (t--)
    {
        int mx = 0;
        int m,s;cin>>m>>s;
        int arr[m];
        int ct = 0;
        fl(i,m) {
            cin>>arr[i];
            mx = max(mx,arr[i]);
            ct += arr[i];
        }
        // sort(arr,arr+m);
        int sum = (mx*(mx+1))/2;
        int remain = sum-ct;

        if(remain==s) cout<<"YES"<<endl;
        else if(remain>s) cout<<"NO"<<endl;
        else{
            int diff = s-remain;
            int i = mx+1;
            int ss = 0;
            while (true)
            {
                ss = ss+i;
                if(ss==diff){
                    cout<<"YES"<<endl;
                    break;
                }else if(ss>diff){
                    cout<<"NO"<<endl;
                    break;
                }
                i++;
            }
            
            
        }
       
        
    }
    
    return 0;
}


