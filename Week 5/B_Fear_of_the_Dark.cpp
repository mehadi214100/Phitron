#include <bits/stdc++.h>
#define ll long long int
#define fl(i, n) for (int i = 0; i < n; i++)
#define sy cout << "YES\n"
#define sn cout << "NO\n"
#define se cout << '\n'
#define sp " "
using namespace std;

double getdistance(double x1,double y1,double x2,double y2){

    return sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
}

bool isinside(double ax,double ay,double px,double py,double radius){
        double distance = getdistance(ax,ay,px,py);
        return ((radius-distance)>1e-15);
}


int main() {
    int t = 1;
    cin>>t;
    while (t--)
    {
        int px,py,ax,ay,bx,by;
        cin>>px>>py;
        cin>>ax>>ay;
        cin>>bx>>by;

        double l = 0;
        double r = INT_MAX*1.0;
        double ans;
        while ((r-l)>1e-15)
        {
            double radius = l+(r-l)/2;
            double gap = 2*radius;
            double diff = getdistance(ax,ay,bx,by);

            if(isinside(ax,ay,0,0,radius) && isinside(ax,ay,px,py,radius)){
                r = radius;
                ans = r;
            }else if(isinside(bx,by,0,0,radius) && isinside(bx,by,px,py,radius)){
                r = radius;
                ans = r;
            }else if(isinside(ax,ay,0,0,radius) && isinside(bx,by,px,py,radius) && ((gap-diff)>1e-15)){
                r = radius;
                ans = r;
                
            }else if(isinside(ax,ay,px,py,radius) && isinside(bx,by,0,0,radius) && ((gap-diff)>1e-15)){
                
                    r = radius;
                    ans = r;
            }else{
                l = radius;
            }

        }
        cout<<fixed<<setprecision(10)<<ans<<endl;
        
        

    }
    
    return 0;
}