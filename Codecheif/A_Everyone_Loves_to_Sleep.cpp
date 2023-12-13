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
        int n, h,m;
        cin>>n>>h>>m;
        int ansH = INT_MAX;
        int ansM = INT_MAX;
        while (n--)
        {
            int hh,mm;
            cin>>hh>>mm;
            if(hh<h){
                int minute = 60-m+mm;
                int hour = 24-(h+1)+hh;
                if(minute>=60){
                    hour += (minute/60);
                    minute = minute%60;
                }

                if(hour<=ansH){
                    if(hour<ansH){
                        ansH = hour;
                        ansM = minute;
                    }else{
                        ansH = hour;
                        ansM = min(ansM,minute);
                    }
                    

                }
            }else if(h==hh){
                if(mm<m){
                    int minute = 60-m+mm;
                    int hour = 24-(h+1)+hh;
                    if(minute>=60){
                        hour += (minute/60);
                        minute = minute%60;
                    }

                    if(hour<=ansH){
                        if(hour<ansH){
                            ansH = hour;
                            ansM = minute;
                        }else{
                            ansH = hour;
                            ansM = min(ansM,minute);
                        }
                        

                    }
                }else{
                    int minute = 60-m+mm;
                int hour = hh-h-1;
                if(minute>=60){
                    hour += (minute/60);
                    minute = minute%60;
                }
                if(hour<=ansH){
                    if(hour<ansH){
                        ansH = hour;
                        ansM = minute;
                    }else{
                        ansH = hour;
                        ansM = min(ansM,minute);
                    }
                    

                }
                }
            }
            else{
                int minute = 60-m+mm;
                int hour = hh-h-1;
                if(minute>=60){
                    hour += (minute/60);
                    minute = minute%60;
                }
                if(hour<=ansH){
                    if(hour<ansH){
                        ansH = hour;
                        ansM = minute;
                    }else{
                        ansH = hour;
                        ansM = min(ansM,minute);
                    }
                    

                }
            }
            
        }
        cout<<ansH<<sp<<ansM<<endl;
        
    }
    
    return 0;
}


