#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int computeSum(const vector<int>& A) {
    int sum = 0;
    for (int i = 0; i < A.size() - 1; ++i) {
        sum += A[i] + A[i + 1];
    }
    return sum;
}

vector<int> rearrangeArray(const vector<int>& A, int X) {
    vector<int> duplicates;
    for (int i = 1; i < A.size(); ++i) {
        if (A[i] == A[i - 1]) {
            duplicates.push_back(i);
        }
    }

    vector<int> temp = A;
    do {
        for (int i = 0; i < duplicates.size(); ++i) {
            swap(temp[duplicates[i]], temp[duplicates[i] - 1]);
        }
        if (computeSum(temp) == X) {
            return temp;
        }
    } while (next_permutation(duplicates.begin(), duplicates.end()));

    return vector<int>{-1};
}

int main() {
    int t;cin>>t;
    while (t--)
    {
      
    
    int N, Q;
    cin >> N >> Q;
    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    for (int q = 0; q < Q; ++q) {
        int X;
        cin >> X;
        vector<int> rearranged = rearrangeArray(A, X);
        for (int num : rearranged) {
            cout << num << " ";
        }
        cout << endl;
    }
    }
    return 0;
}
