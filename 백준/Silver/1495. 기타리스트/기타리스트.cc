#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int N, S, M;
	cin >> N >> S >> M;

	vector<short> volList(N);
	for (short i = 0; i < N; ++i)
	{
		cin >> volList[i];;
	}

	vector<vector<short>> DP(N+1);
	DP[0].push_back(S);
	for (short i = 0; i < N; ++i)
	{
		for (auto elem : DP[i])
		{
			if ((elem - volList[i] >= 0) && (!binary_search(DP[i+1].begin(), DP[i+1].end(), elem - volList[i])))
			{
				DP[i + 1].push_back(elem - volList[i]);
			}
			if ((elem + volList[i] <= M) && (!binary_search(DP[i + 1].begin(), DP[i + 1].end(), elem + volList[i])))
			{
				DP[i + 1].push_back(elem + volList[i]);
			}
		}
		sort(DP[i + 1].begin(), DP[i + 1].end());
	}

	if (DP[N].size() == 0)
	{
		cout << -1 << endl;
	}
	else
	{
		short m1ax = -987654321;

		for (auto elem : DP[N])
		{
			m1ax = m1ax > elem ? m1ax : elem;
		}

		cout << m1ax << endl;
	}

}