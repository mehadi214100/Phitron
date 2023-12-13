#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while (t--)
    {
       
    int n,k;
    cin >> n>>k;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];


    int i = 0, j = 0;
    queue<int> q;
    int ct = 0;
    while (j < n)
    {
        if (a[j]%2==1)
            q.push(a[j]);
        if (j >= k - 1)
        {
            if (q.size())
                if(q.front()%2==1) ct++;
            
            if (a[i] %2==1)
                q.pop();
            i++;
        }
        j++;
    }
    cout<<ct<<endl;
    }
    return 0;
}