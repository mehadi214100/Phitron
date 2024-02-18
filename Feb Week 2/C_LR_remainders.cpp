// #include <iostream>
// #include <cmath>
// #include <vector>

// using namespace std;

// int main() {
//     // Assuming arr is your array of size 10^4
//     vector<int> arr; // Assuming elements are vectors of size 10^4

//     // Input the elements of the array
//     int n;
//     cout << "Enter the number of elements in the array: ";
//     cin >> n;
    
//     for (int j = 0; j < n; ++j) {
//         int value;
//         cin >> value;
//         arr.push_back(value);
//     }
        
//     double log_sum = 0;
    
//     for (const auto& num : arr) {
//         log_sum += log(num);
//     }
    
//     double result = exp(log_sum);

//     // Output the result
//     cout << "Product of all elements in the array: " << result << endl;

//     return 0;
// }
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
        int n;double m;cin>>n>>m;
        deque<int>q;
        double log_sum = 0;
        for (int i = 0; i < n; i++)
        {
            int x;cin>>x;
            q.push_back(x);
            log_sum += log(x);
        }
        string s;cin>>s;

        // double result = (exp(log_sum));
        // int res =  ceil(modulo(result, m*1.0));
        // cout<<(res%m)<<sp;

        for (int i = 0; i < n; i++)
        {
            double result = (exp(log_sum));
            
            cout<<(int)result<<sp;

            if(s[i]=='L'){
                int val = q.front();  
                log_sum -= log(val);
                q.pop_front();
            }
            else{
                log_sum -= log(q.back());
                q.pop_back();
            }
            
        }
        cout<<endl;
        
        
    }
    
    return 0;
}