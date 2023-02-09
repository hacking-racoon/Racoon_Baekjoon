#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(const pair<int, int>& left, const pair<int, int>& right)
{
	if (left.first == right.first)
	{
		return left.second > right.second;
	}

	return left.first < right.first;
}

int main()
{
	int N, tmpPos, tmpLen;

	cin >> N;

	vector<pair<int, int>> domino(N);

	for (int i = 0; i < N; ++i)
	{
		cin >> tmpPos >> tmpLen;
		domino[i] = { tmpPos, tmpLen };
	}

	sort(domino.begin(), domino.end(), cmp);

	int currPos, fallPos, ret;
	fallPos = ret = 0;

	for (int i = 0; i < N; ++i)
	{
		currPos = domino[i].first;

		if (currPos <= fallPos)
		{
			fallPos = domino[i].first + domino[i].second;
			continue;
		}
		
		fallPos = domino[i].first + domino[i].second;
		ret++;
	}

	cout << ret << endl;
}