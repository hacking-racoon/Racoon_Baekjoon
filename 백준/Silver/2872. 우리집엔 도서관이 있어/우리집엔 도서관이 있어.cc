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
#define UC (0)
#define PD (1)
typedef unsigned long long ull;


int votes[2];

int main() {

	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n;
	cin >> n;

	vector<int> books(n);
	for (auto& elem : books) cin >> elem;

	int currNum = n;
	int ret = 0;
	for (int i = n - 1; i >= 0; --i)
	{
		if (books[i] == currNum)
		{
			currNum--;
		}
		else
		{
			ret++;
		}
	}

	cout << ret << endl;


}