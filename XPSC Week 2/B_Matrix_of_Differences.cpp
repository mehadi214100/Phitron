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
        int n;cin>>n;
        int ct1=0,ct2 = 1;
        int check = 1;
        int arr[n+1][n+1];
        for (int i = 1; i <= n; i++)
        {
            if(i%2==1){
                for (int j = 1; j <= n; j++)
                {
                    if(check%2==1){
                        // cout<<n*n-ct1<<" ";
                        arr[i][j] = n*n-ct1;
                        ct1++;
                    }else{
                        arr[i][j] = ct2;
                        ct2++;
                    }
                    check++;
                }
                
            }else{
                for (int j = n; j >= 1; j--)
                {
                    if(check%2==1){
                        // cout<<n*n-ct1<<" ";
                        arr[i][j] = n*n-ct1;
                        ct1++;
                    }else{
                        // cout<<ct2<<" ";
                        arr[i][j] = ct2;
                        ct2++;
                    }
                    check++;
                }
            }
            
        }
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                cout<<arr[i][j]<<sp;
            }
            cout<<endl;
        }
        
    }
    
    return 0;
}