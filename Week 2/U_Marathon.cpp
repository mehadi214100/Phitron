#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        int a,b,c,d,count=0;
        cin>>a>>b>>c>>d;
        if (a<b)
        {
            count = count+1;
        }
        if (a<c)
        {
            count = count+1;
        }if (a<d)
        {
            count = count+1;
        }
        array[i] = count;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<array[i]<<endl;
    }
    
    
    
}