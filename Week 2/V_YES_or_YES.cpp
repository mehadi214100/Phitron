#include<iostream>
#include<string>
using namespace std;

int main(){
    int n;
    cin>>n;
    string array[n];
    for (int i = 0; i < n; i++)
    {
        string word;
        cin>>word;
        string data = "";
        for (int j = 0; j < 3; j++)
        {
            data += toupper(word[j]);
        } 
        if (data=="YES")
        {
            array[i]="YES";
        }else{
            array[i]="NO";
        }
        
        
    }
    for (int i = 0; i < n; i++)
    {
        cout<<array[i]<<'\n';
    }
    
    
    
    
}