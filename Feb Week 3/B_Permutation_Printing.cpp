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
        int n;
        cin>>n;
        int ans[n];
        int i=0,j=n,k=1;
        for (int i = 1; i <=n ; i++)
        {
            if(i%2==1){
                cout<<j<<sp;
                j--;
            }else{
                cout<<k<<sp;
                k++;
            }
        }
        cout<<endl;
        
    }
    
    return 0;
}