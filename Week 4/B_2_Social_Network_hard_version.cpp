#include <bits/stdc++.h>
#define ll long long int
#define fl(i, n) for (int i = 0; i < n; i++)
#define sy cout << "YES\n"
#define sn cout << "NO\n"
#define se cout << '\n'
#define sp " "
using namespace std;

int main() {
    int n,k;cin>>n>>k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    map<int,int>mp;
    deque<int>dq;
    for (int i = 0; i < n; i++)
    {
        if(mp[arr[i]]>=1) continue;
        if(dq.empty()){
            dq.push_back(arr[i]);
            mp[arr[i]]++;
        }else{
            if(dq.size()<k){
                dq.push_front(arr[i]);
                mp[arr[i]]++;
            }else{
                int x = dq.back();
                dq.pop_back();
                mp[x]--;
                dq.push_front(arr[i]);
                mp[arr[i]]++;
            }
        }
    }
    cout<<dq.size()<<endl;
    for (int i = 0; i < dq.size(); i++)
    {
       cout<<dq[i]<<sp;
    }
    

    return 0;
}


