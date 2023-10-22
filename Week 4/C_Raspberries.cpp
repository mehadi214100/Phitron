#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t; 

    while (t--) {
        int n, k;
        cin >> n >> k; 
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        long long product = 1;
        for (int ai : a) {
            product *= ai;
        }
        int operations = 0;
        long long remainder = product % k;

        if (remainder == 0) {
            cout << "0" << endl;
        } else {
            while (remainder != 0) {
                sort(a.begin(),a.end());
                int mn = a[0];
                remainder = (remainder * mn) % k;
                operations++;
                a[0]++;
            }
            cout << operations << endl;
        }
    }

    return 0;
}
