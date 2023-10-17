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
        int n;cin>>n;
        int arr[n];
        ll ct = 0;
        priority_queue<int>pq;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            pq.push(x);

            if(x==0){
                ct+= pq.top();
                pq.pop();
            }

        }
       cout<<ct;
        cout<<endl;
        
    }
    
    return 0;
}


