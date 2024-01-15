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
        int n,m;cin>>n>>m;
        deque<int>q1,q2,ans;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin>>x;
            q1.push_back(x);
        }
        for (int i = 0; i < m; i++)
        {
            int x;
            cin>>x;
            q2.push_back(x);
        }
        sort(q1.begin(),q1.end());
        sort(q2.rbegin(),q2.rend());
        while (ans.size()<n)
        {
            int data1 = abs(q1.back()-q2.back());
            int data2 = abs(q1.front()-q2.front());

            if(data1>data2){
                ans.push_back(data1);
                q1.pop_back();
                q2.pop_back();
            }else{
                ans.push_back(data2);
                q1.pop_front();
                q2.pop_front();
            }
        }
        ll res = 0;
        for (auto i:ans)
        {
            res += i;
        }
        cout<<res<<endl;
        

    }

    
    return 0;
}