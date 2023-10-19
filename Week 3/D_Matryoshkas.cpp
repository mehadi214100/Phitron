#include <bits/stdc++.h>
#define ll long long int
#define fl(i, n) for (int i = 0; i < n; i++)
#define sy cout << "YES\n"
#define sn cout << "NO\n"
#define se cout << '\n'
#define sp " "
using namespace std;

int main() {
    int t;cin>>t;
    while (t--)
    {
        int n;cin>>n;
        map<int,int>mp;
        for (int i = 0; i < n; i++)
        {
            int x;cin>>x;
            mp[x]++;
        }
        int prev = 0;
        int ct = 0;
        int prevalue  = 0;

        int i = 0;
        int j = 0;
        for(auto v:mp){
            if(i==0){
                prev = v.first;
                prevalue = v.second;
                ct += v.second;
                i++;
            }else{
                int curr = v.first;
                if(curr==prev+1){
                    int currValue = v.second;
                    if(currValue>prevalue){
                        int diff = currValue-prevalue;
                        ct += diff;
                    }
                    prevalue = currValue;
                    prev = curr;
                }else{
                    ct += v.second;
                    prevalue = v.second;
                    prev = curr;
                }

            }
        }
        cout<<ct<<endl;
        
    }


    return 0;
}


