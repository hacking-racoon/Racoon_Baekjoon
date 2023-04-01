#include <iostream>
#include <deque>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string>
#include <queue>
#include <functional>
#include <queue>
#include <math.h>
#include <queue>
using namespace std;
#define m1in(a,b) ((b) > (a) ? (a) : (b))
#define m1ax(a,b) ((b) > (a) ? (b) : (a))
#define MOD 1000000009
typedef unsigned long long ull;


ull DP[1001][1001];

int main() {

	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int repeat, n, m;
	cin >> repeat;
	
	DP[1][1] = DP[2][1] = DP[3][1] = 1;
	for (int i = 1; i <= 4; ++i)
	{
		for (int j = 1; j <= 4; ++j)
		{
			if (i - 1 >= 0)
			{
				DP[i][j] += DP[i - 1][j - 1];
			}
			if (i - 2 >= 0)
			{
				DP[i][j] += DP[i - 2][j - 1];
			}
			if (i - 3 >= 0)
			{
				DP[i][j] += DP[i - 3][j - 1];
			}

		} 
	}
	int startN = 5;
	while (repeat--)
	{
		cin >> n >> m;

		for (int i = startN; i <= n;  ++i) {
			for (int j = 1; j <= 1000; ++j) {
				if (DP[i][j] != 0) continue;
				
				DP[i][j] = (DP[i][j] + DP[i - 1][j - 1] + DP[i - 2][j - 1] + DP[i - 3][j - 1]) % MOD;
				
			}
		}

		startN = m1ax(startN,n);
		cout << DP[n][m] << '\n';
	}

	

}