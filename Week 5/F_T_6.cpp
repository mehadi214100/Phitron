#include <bits/stdc++.h>
#define ll long long int
#define fl(i, n) for (int i = 0; i < n; i++)
#define sy cout << "YES\n"
#define sn cout << "NO\n"
#define se cout << '\n'
#define sp " "
using namespace std;

bool aresame(double a,double b=1.0){
    return fabs(a-b)<1e-15;
}

double isvalid(int arr[],int n,int mid){
    double val = 1.0;
    for (int i = 0; i < n; i++)
    {
        double val1 = arr[i]*1.0;
        double res = val1/mid;
        val*= res;
    }
    return val;
    
}

int main() {
    int t = 1;
    cin>>t;
    while (t--)
    {
        int n;cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        int l = 1;
        int r = INT_MAX;
        bool flag = false;
        while (l<=r)
        {
            int mid = l + (r-l)/2;
            double res = isvalid(arr,n,mid);
            if(aresame(res)){
                sy;
                flag = true;
                break;
            }else if(res<1.0){
                r = mid-1;
            }else if(res>1.0){
                l = mid+1;
            }
        }
        if(!flag)sn;
        
         
    }
    
    return 0;
}