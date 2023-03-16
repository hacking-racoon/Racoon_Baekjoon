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

typedef unsigned long long ull;

ull inline nC2(ull n)
{
	return n * (n - 1) / 2;
}

int main() {

	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	ull K;
	cin >> K;

	ull currIdx = 1;
	ull currNode;
	ull ret = 0;
	ull currComb;
	vector<ull> combs;
	while (K != 0)
	{
		currComb = 1;
		currNode = 2;

		while ((currComb = nC2(currNode) <= K))
		{
			currNode++;
		}
		combs.push_back(currNode-2);
		ret += currNode - 2;
		K -= nC2(currNode-1);
	}

	cout << ret + 1 << endl;
	cout << "0 -1" << endl;

	for (const auto& elem : combs)
	{
		for (ull i = 0; i < elem; ++i)
		{
			if (i == 0)
			{
				cout << currIdx++ << " 0" << endl;
			}
			else
			{
				cout << currIdx << " " << currIdx - 1 << endl;
				currIdx++;
			}
		}
	}
}