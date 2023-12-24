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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        int ct = 0;
        bool check = true;
        for (int i = n-1; i >0; i--)
        {
           
            if(arr[i]>arr[i-1]){
                continue;
            }else{
                if(arr[i]<=0){
                    check = false;
                    break;
                }
                int number = log2(arr[i-1]/arr[i])+1;
                 if(number<0){
                        check = false;
                        
                        break;
                }
                if(pow(2,number)==0){
                        check = false;
                        
                        break;
                }
                arr[i-1] = arr[i-1]/pow(2,number);
                if(i-1!=0){
                   
                    if(arr[i-1]<=0){
                    
                        check = false;
                        break;
                    }
                }
                ct += number;
            }
            
        }
        if(check)cout<<ct<<endl;
        else cout<<-1<<endl;
        
    }
    
    return 0;
}