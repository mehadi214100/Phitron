#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define uli unsigned long long int
#define lli long long int
#define blank string blank;getline(cin,blank)
#define digit(n) (int)log10(n)+1
#define minn(x,y) (x<y?x:y)
#define maxx(x,y) (x>y?x:y)
#define nl '\n'
#define sp " "
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define lstr(a) transform(a.begin(),a.end(),a.begin(),::tolower)
#define ustr(a) transform(a.begin(),a.end(),a.begin(),::toupper)
#define rstr(a) reverse(a.begin(),a.end())
#define str(a) sort(a.begin(),a.end())
#define dstr(a) sortasc(a);revstr(a)
#define ary(a,n) sort(a,a+n)
#define dary(a,n) sort(a,a+n,greater<int>())
#define MOD 1000000007
#define set(n) fixed<<setprecision(n)
#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define pop pop_back
#define yes cout<<"YES"<<nl
#define no cout<<"NO"<<nl
#define vec(v) sort((v).begin(),(v).end())
#define dvec(v) sort(v.begin(), v.end(), greater<int>())
bool cmp(pair<lli,lli>a,pair<lli,lli>b)
{
    if(a.se!=b.se)
    {
        return a.se>b.se;
    }
    else
    {
        return a.fi<b.fi;
    }
}
void solve()
{
    cin.ignore();
   int n,k,num,x,y;
   cin>>n>>k;
   map<int,pair<int,int>>m;
   for(int i=0;i<n;i++)
   {
       cin>>num;
       if(m[num]==mp(0,0))
       {
           m[num]=mp(i+1,i+1);
       }
       else
       {
           m[num].se=i+1;
       }
   }
   for(int i=0;i<k;i++)
   {
       cin>>x>>y;
       if(m[x].fi>=m[y].se || m[x]==mp(0,0))no;
       else yes;
   }
}
int main()
{
    fast;
    int t=1;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}