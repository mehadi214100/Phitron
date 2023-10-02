#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;cin>>t;
    while (t--)
    {
        int n;cin>>n;
        int ans = 0;
        int k = 1;
        for (int i = 0; i < n; i++)
        {
            int x;cin>>x;
            if(x>k){
                ans = ans + (x-k);
                k = x+1;
            }else {
                k++;
            }
        }
        cout<<ans<<endl;
        
    }
    
    return 0;
}


