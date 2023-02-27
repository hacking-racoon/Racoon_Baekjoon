#include <iostream>
#include <deque>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

#define m1in(a, b) ((a) > (b) ? (b) : (a))

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int N;
	cin >> N;

	vector<int> P(N + 1);
	for (int i = 1; i <= N; ++i)
	{
		cin >> P[i];
	}

	vector<int> DP(N + 1, 987654321);
	DP[0] = 0;

	for (int i = 1; i <= N; ++i)
	{
		for (int j = 1; i - j >= 0; ++j)
		{
			DP[i] = m1in(DP[i - j] + P[j], DP[i]);
		}
	}

	cout << DP[N] << endl;

}