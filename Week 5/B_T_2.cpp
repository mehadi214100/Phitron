#include <bits/stdc++.h>
#define ll long long int
#define fl(i, n) for (int i = 0; i < n; i++)
#define sy cout << "YES\n"
#define sn cout << "NO\n"
#define se cout << '\n'
#define sp " "
using namespace std;

int main() {
    int n;cin>>n;
    vector<int>v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    int q;cin>>q;
    while (q--)
    {
        int x;cin>>x;
        auto lb = lower_bound(v.begin(),v.end(),x);
        auto up = upper_bound(v.begin(),v.end(),x);
        int ans1 = (*(lb-1));
        int idx1 = lb-v.begin()-1;
        int ans2 = (*up);
        int idx2 = up-v.begin();

        
        if((idx1>=0 && idx1<=n-1)&& (idx2>=0 && idx2<=n-1)){
            cout<<ans1<<sp<<ans2<<endl;
        }else if(idx1<0 || idx1>n-1){
            cout<<"X"<<sp<<ans2<<endl;
        }else{
            cout<<ans1<<sp<<"X"<<endl;
        }
    }
    
    
    
    return 0;
}