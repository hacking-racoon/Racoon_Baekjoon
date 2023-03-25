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

ull upDP[100'001];
ull downDP[100'001];

int main() {

	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, repeat;
	cin >> repeat;

	upDP[0] = upDP[1] = downDP[0] = downDP[1] = 1;
	for (int i = 2; i <= 4; ++i)
	{
		upDP[i] += upDP[i - 1];
		upDP[i] += upDP[i - 2];

		downDP[i] += downDP[i - 1];
		downDP[i] += downDP[i - 2];
		if (i - 3 >= 0)
			downDP[i] += downDP[i - 3];

		if (i - 4 >= 0)
			downDP[i] += downDP[i - 4];
	}
	int finalIdx = 5;
	while (repeat--)
	{
		cin >> n;

		for (int i = finalIdx; i <= n; ++i)
		{
			upDP[i] = (upDP[i - 1] + upDP[i - 2]) % MOD;
			downDP[i] = (downDP[i - 1] + downDP[i - 2] + downDP[i - 3] + downDP[i - 4]) % MOD;
		}

		finalIdx = m1ax(finalIdx, n);

		cout << (upDP[n] * downDP[n]) % MOD << endl;
	}
}