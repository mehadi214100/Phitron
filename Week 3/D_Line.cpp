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
        string s;cin>>s;
        
        int arr[n];
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            char c = s[i];
            if(s[i]=='L'){
                int ct =  i-0;
                arr[i] = ct;
                sum+= ct;
            }else{
                int ct =  n-1-i;
                arr[i] = ct;
                sum+= ct;
            }
        }
        int i = 0,j = n-1;
        int mid = (i+j)/2;
        int count  = 0;
        while (i<=mid && j>=mid)
        {
           char L = s[i];
           char R = s[j];
           if(L=='L'&&R=='L'){
                cout<<"op1 : ";
                int left = n-1-i;
                sum = sum - arr[i] + left;
                cout<<sum<<sp;
                count++;
                i++;
           }else if(L=='L' && R=='R'){
                int right = j-0;
                int left = n-1-i;
                int sum1 = sum - arr[j] + right;
                int sum2 = sum - arr[i] + left;
                if(sum1>=sum2){
                    sum = sum1;
                    j--;
                }else{
                    sum = sum2;
                    i++;
                }
                cout<<"op2 : ";
                cout<<sum<<sp;
                count++;
           }else if(L=='R' && R =='R'){
                int right = j-0;
                int sum1 = sum - arr[j] + right;
                if(sum1==sum){
                    break;
                    return 0;
                    j--;
                }
                else{
                    cout<<sum1<<sp;
                    sum = sum1;
                    j--;
                    count++;
                }
           }else{
                i++;
                j--;
           }
        }
        if(i<=mid){
            if(s[i]=='L'){
                int left = n-1-i;
                sum = sum - arr[i] + left;
                cout<<"op4 : ";
                cout<<sum<<sp;
                count++;
            }
            i++;
        }
        if(j>=mid){
            if(s[j]=='R'){
                int left = j-0;
                sum = sum - arr[j] + left;
                cout<<"op5 : ";
                cout<<sum<<sp;
                count++;
            }
            j--;
        }
        
        for (int i = count; i < n; i++)
        {
            cout<<"op5 : ";
            cout<<sum<<sp;
        }
            
       

        cout<<endl;

    }
    
    return 0;
}