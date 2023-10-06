#include<iostream>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    string s1,s2;
    cin>>n;
    cin>>s1;
    cin>>s2;
    bool check = true;
    for (int i = 0; i < n; i++)
    {
        if (s1[i]!=s2[i])
        {
        if ((s1[i]=='B' &&s2[i]=='G') || (s1[i]=='G' &&s2[i]=='B'))
        {
        }else{
            cout<<"NO"<<endl;
            check = false;
            break;
        }
        
        }
        
    }
    if (check)
    {
        cout<<"YES"<<endl;
    }

  }
  
  
  
}