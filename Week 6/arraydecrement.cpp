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
        int n;
        cin >> n;
        int a[n],b[n];
        vector<int>zero;
        
        for(int i=0; i<n; i++) {
            cin >> a[i];
        }
        int mx = 0;
        for(int i=0; i<n; i++) {
            cin >> b[i];
            if(b[i]==0){
                zero.push_back(a[i]);
                mx = max(mx,a[i]);
            }
        }
       // cout << "mx" <<mx<< endl;
        int diff;
        int k =0;
        int mxdiff = 0;
        bool flag = true;
        for(int i=0;i<n;i++){
            if(b[i]!=0){
                if(b[i]>a[i]){
                    flag = false;
                    break;
                }
                if(k==0){
                    diff= a[i]-b[i];
                    mxdiff = max(diff,mxdiff);
                    k++;
                }else{
                    int dd = a[i]-b[i];
                    if(dd!=diff){
                        flag = false;
                        break;
                    }
                }
            }
        }
        if(mx>mxdiff && k!=0) flag = false;
        
        if(flag)sy;
        else sn;
        
        
        
    }

    return 0;
}