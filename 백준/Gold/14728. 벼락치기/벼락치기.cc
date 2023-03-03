#include <iostream>
#include <deque>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string>
using namespace std;

#define m1ax(a, b) ((a) > (b) ? (a) : (b))

int DP[101][10001];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int N, T;
	cin >> N >> T;

	vector<pair<int, int>> units(N);

	int tmpTime, tmpScore;
	for (int i = 0; i < N; ++i)
	{
		cin >> tmpTime >> tmpScore;
		units[i] = { tmpTime, tmpScore };
	}

	for (int i = 1; i <= N; ++i){
		for (int j = 1; j <= T; ++j){
			if (units[i - 1].first <= j) {
				DP[i][j] = m1ax(DP[i - 1][j - units[i - 1].first] + units[i-1].second, DP[i-1][j]);
			}
			else
			{
				DP[i][j] = DP[i-1][j];
			}
		}
	}

	cout << DP[N][T] << endl;
}