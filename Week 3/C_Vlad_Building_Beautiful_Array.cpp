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
        int arr[n];

        int mn = INT_MAX;

        int evenMax = INT_MIN;
        int evenMin = INT_MAX;

        int oddMax = INT_MIN;
        int oddMin = INT_MAX;

        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
            mn = min(mn,arr[i]);

            if(arr[i]%2==0){
                evenMax = max(evenMax,arr[i]);
                evenMin = min(evenMin,arr[i]);
            }else{
                
                oddMax = max(oddMax,arr[i]);
                oddMin = min(oddMin,arr[i]);
            }

        }
        bool check = true;
        if(mn%2==0){
            for (int i = 0; i < n; i++)
            {
                if(arr[i]%2){
                    int diff = arr[i]-oddMin;
                    if(diff<=0){
                        check = false;
                        break;
                    }
                }
            }
            
        }else{
            for (int i = 0; i < n; i++)
            {
                if(arr[i]%2==0){
                    int diff = arr[i]-oddMin;
                    if(diff<=0){
                        check = false;
                        break;
                    }
                }
            }
        }
        if(check==true) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

        

    }
    
    return 0;
}


