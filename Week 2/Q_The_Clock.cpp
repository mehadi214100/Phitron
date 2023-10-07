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
        int hour,minute,x;char c;
        cin>>hour>>c>>minute>>x;
        int time = 0;
        set<int>res;
        int totalminute = 1440;
        while (totalminute--)
        {
            if(hour>=24){
                hour = hour-24;
            }
            
            if(hour%10==((minute/10)%10) && ((hour/10)%10)==(minute%10)){

                res.insert(hour);
            }
            minute = minute + x;
            hour += minute/60;
            minute %= 60;
            time += x;
        }
        
        cout<<res.size()<<endl;
        
    }
    
    return 0;
}


