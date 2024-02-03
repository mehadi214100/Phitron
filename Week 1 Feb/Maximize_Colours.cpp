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
        int r,g,b;
        int arr[3];
        cin>>r>>g>>b;
        arr[0] =r;
        arr[1] = g;
        arr[2] = b;
        sort(arr,arr+3,greater<int>());
        int ct =0;
        if(arr[0]>0){
            ct++;
            arr[0]--;
        }
        if(arr[1]>0){
            ct++;
            arr[1]--;
        }
        if(arr[2]>0){
            ct++;
            arr[2]--;
        }
        if(arr[0]>0 && arr[1]>0){
            arr[0]--;
            arr[1]--;
            ct++;
        }
        if(arr[0]>0 && arr[2]>0){
            arr[0]--;
            arr[2]--;
            ct++;
        }
        if(arr[1]>0 && arr[2]>0){
            arr[1]--;
            arr[2]--;
            ct++;
        }
        cout<<ct<<endl;
    }
    
    return 0;
}