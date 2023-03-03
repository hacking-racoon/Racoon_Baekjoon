#include <iostream>
#include <deque>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string>
using namespace std;

#define m1in(a, b) ((a) > (b) ? (b) : (a))

bool coinMap[100][100];

void flipCoin(int row, int col)
{
	for (int i = 0; i <= row; ++i) {
		for (int j = 0; j <= col; ++j){
			coinMap[i][j] = !coinMap[i][j];
		}
	}
}


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int N, M;
	cin >> N >> M;

	string tmp;
	for (int i = 0; i < N; ++i){
		cin >> tmp;
		for (int j = 0; j < M; ++j){
			coinMap[i][j] = tmp[j] - '0';
		}
	}

	int ret = 0;
	for (int i = N - 1; i >= 0; --i){
		for (int j = M - 1; j >= 0; --j) {
			if (coinMap[i][j] == 1)
			{
				ret++;
				flipCoin(i, j);
			}
		}
	}

	cout << ret << endl;
}