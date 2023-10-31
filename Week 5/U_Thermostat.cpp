#include <bits/stdc++.h>
#define ll long long int
#define fl(i, n) for (int i = 0; i < n; i++)
#define sy cout << "YES\n"
#define sn cout << "NO\n"
#define se cout << '\n'
#define sp " "
using namespace std;

int main() {
     int t;
     cin>>t;
     while (t--)
     {
          int l,r,x; cin>>l>>r>>x;
          int a,b; cin>>a>>b;
          int A = min(a,b);
          int B = max(a,b);

          if(A==B) cout<<0<<endl;
          else if((A+x)<=B) cout<<1<<endl;
          else if(B+x<=r || (A-x>=l)) cout<<2<<endl;
          else if(B+x>r && B-x<l || A+x>r && A-x<l)  cout<<-1<<endl;
          else cout<<3<<endl;       
     }
     
     return 0;
}