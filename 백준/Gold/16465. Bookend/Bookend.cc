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

	int N, M, L;
	cin >> N >> M >> L;

	int sumOfWidths = 0;
	vector<int> books(N);
	for (auto& elem : books)
	{
		cin >> elem;
		sumOfWidths += elem;
	}

	if (sumOfWidths > M)
	{
		cout << -1 << endl;
	}
	else if (sumOfWidths == M)
	{
		cout << 0 << endl;
	}
	else if (sumOfWidths >= L && M >= L) {
		cout << 1 << endl;
	}
	else if (sumOfWidths + L <= M)
	{
		cout << 1 << endl;
	}
	
	else
	{
		cout << -1 << endl;
	}
}