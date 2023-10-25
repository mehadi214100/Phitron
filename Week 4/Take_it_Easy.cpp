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
       int sum = 0;
       for (int i = 0; i < n; i++)
       {
            cin>>arr[i];
            sum += arr[i];
       }
       sort(arr,arr+n);
       if(sum%n!=0){
            cout<<"No"<<endl;
       }else{
            int equal = sum/n;
            int plus = 0;
            int minus = 0;
            bool chek = true;
            for (int i = 0; i < n; i++)
            {
               if(arr[i]<equal){
                    int diff = equal-arr[i];
                    if(diff%2==0){
                        plus += diff;
                    }else{
                        chek = false;
                        break;
                    }
               }else if(arr[i]>equal){
                    int diff = arr[i]-equal;
                    if(diff%2==0){
                        minus += diff;
                    }else{
                        chek = false;
                        break;
                    }
               }
            }
            if(chek==true && plus==minus){
                cout<<"Yes"<<endl;
            }else cout<<"No"<<endl;
            
       }

    }  
    return 0;
}


