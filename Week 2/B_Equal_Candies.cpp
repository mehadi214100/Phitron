#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
  int n;
  cin>>n;
  int arr[n];
  int minimum = 999999999;
  for (int i = 0; i < n; i++)
  {
    cin>>arr[i];
    minimum = min(minimum,arr[i]);
  }
  int count = 0;
  for (int i = 0; i < n; i++)
  {
    count = count+(arr[i]-minimum);
  }
  cout<<count<<endl;


  }

  
  
}