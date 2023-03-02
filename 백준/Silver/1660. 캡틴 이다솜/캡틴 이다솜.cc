#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string>
using namespace std;

#define m1in(a, b) ((a) > (b) ? (b) : (a))
unsigned int cntX[126];

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int N;
	cin >> N;

	for (int i = 1; i < 126; ++i)
	{
		cntX[i] = cntX[i - 1] + ((i * i) + i) / 2;
	}

	vector<unsigned int> DP(N + 1, -1);
	DP[0] = 0;

	unsigned int currCntX;
	for (int i = 1; i <= N; ++i)
	{
		int len = 1;
		while (true) {
			if (cntX[len] > i) break;

			DP[i] = m1in(DP[i], DP[i - cntX[len]] + 1);
			len++;
		}
	}

	cout << DP[N] << endl;
}