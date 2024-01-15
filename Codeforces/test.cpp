#include <bits/stdc++.h>
using namespace std;

const int MAXN = 2 * 100 * 1000;

int a[MAXN + 1];
int n;
long long ps[MAXN + 1];

void readInput();
bool check();

int main() {
	int t;
	cin >> t;
	while (t--) {
		readInput();
		cout << (check()? "YES": "NO") << endl;
	}
}

void readInput() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		if (i % 2 == 0)
			a[i] = -a[i];
		ps[i] = ps[i - 1] + a[i];	
	}
}

bool check() {
	set<long long> s;
	for (int i = 0; i <= n; i++)
		s.insert(ps[i]);
	return s.size() != n + 1;	
}