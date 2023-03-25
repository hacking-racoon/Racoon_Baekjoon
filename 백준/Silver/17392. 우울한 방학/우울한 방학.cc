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

double logbase(double a, double base)
{
	return log(a) / log(base);
}


int main() {

	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int ret = 0;

	int N, M;
	cin >> N >> M;

	if (N == 0)
	{
		for (int j = M; j >= 0; --j) ret += j*j;
	}
	else {
		vector<int> appointments(N);
		int happyDays = 0;
		for (auto& elem : appointments)
		{
			cin >> elem;
			happyDays += elem + 1;
		}

		int unhappyDays = M - happyDays;

		int unhappyBase = unhappyDays / (N+1);
		int cntPlus = unhappyDays % (N+1);

		for (int i = 0; i < cntPlus; ++i)
		{
			for (int j = unhappyBase + 1; j >= 0; --j) ret += j*j;
		}

		for (int i = cntPlus; i < N+1; ++i)
		{
			for (int j = unhappyBase; j >= 0; --j) ret += j*j;

		}
	}
	cout << ret << endl;

}