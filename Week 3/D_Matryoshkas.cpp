#include <bits/stdc++.h>
using namespace std;

int main() {
        
        map<int, int> mp;
        mp[1] = 1;
        mp[2] = 2;
        mp[3] = 2;
        mp[4] = 1;

        int cnt = 3;
        while(mp.size() && cnt--) {
                for(auto &m : mp) {
                    cout << m.first << endl;
                    mp.erase(1);
                
                // if(prevKey != -1) {
                //     // cout << prevKey << sp << m.first<< endl;
                //     if(m.first == prevKey + 1) {
                //         mp[m.first]--;
                //     } else {
                //         cnt++;
                //         break;
                //     }

                // } else {
                //     mp[m.first]--;
                // }

                // prevKey = m.first;
                // if(mp[m.first] == 0) {
                //     mp.erase(m.first);
                // }
                // for(auto &m : mp) {
                //     cout << m.first << " " << m.second << endl;
                // }
                // cout << endl;
                // cout << prevKey << endl;
            }   

        }
        // cout << cnt << endl;
        

    
    return 0;
}


