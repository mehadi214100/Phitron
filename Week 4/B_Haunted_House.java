#include <bits/stdc++.h>
using namespace std;

int N = 1e5+5;
int BitsSetTable256[N];

void initialize() 
{ 


	for (int i = 0; i < N; i++)
	{ 
		BitsSetTable256[i] = (i & 1) + 
		BitsSetTable256[i / 2]; 
	} 
} 

int countSetBits(int n) 
{ 
	return (BitsSetTable256[n & 0xff] + 
			BitsSetTable256[(n >> 8) & 0xff] + 
			BitsSetTable256[(n >> 16) & 0xff] + 
			BitsSetTable256[n >> 24]); 
} 

int main() 
{ 

	initialize(); 
	int n = 9; 
	cout << countSetBits(n);
} 


