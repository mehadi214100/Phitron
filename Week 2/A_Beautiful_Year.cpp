#include<iostream>
using namespace std;

bool checker (string name){
    bool data = true; 
    for (int i = 0; i < name.length(); i++)
    {
        int count = 0;
        for (int j = 0; j < name.length(); j++)
        {
            if (name[i]==name[j])
            {
                count++;
            }
            if (count>1)
            {
                return true;
                
            }
            
        }
        
    }
    return false;
}


int main(){
  
   int year;
   cin>>year;
   year = year+1;
   while (true)
   {
     if (checker(to_string(year))==0)
     {
        cout<<year;
        break;
     }
     year++;
     
   }
   

    
    
}