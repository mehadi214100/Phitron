#include <bits/stdc++.h>
#define ll long long int
#define fl(i, n) for (int i = 0; i < n; i++)
#define sy cout << "YES\n"
#define sn cout << "NO\n"
#define se cout << '\n'
#define sp " "

using namespace std;

int main() {
    int n,q;
    int ct = 0;
    while (cin>>n>>q)
    {
        ct++;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+4);
        if(n!=0 && q!=0)cout<<"CASE# "<<ct<<":"<<endl;
        else break;
        while (q--)
        {
            int x;
            cin>>x;
            int l = 0, r = n - 1;
            int ans = -1;
            while (l <= r)
            {
                int mid = l + (r - l) / 2;
                if (arr[mid] == x)
                {
                    ans = mid;
                    r = mid;
                }
                if (x < arr[mid])
                {
                    r = mid - 1;
                }
                else
                {
                    l = mid + 1;
                }
            }
            if(ans!=-1){
                cout<<x<<" found at "<<ans+1<<endl;
            }else{
                cout<<x<<" not found"<<endl;
            }
        }
        
    }
    
    return 0;
}


