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
#define MOD 1000000009
typedef unsigned long long ull;


ull DP[1001][1001];

int main() {

	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int repeat, n;
	cin >> repeat;
	
	while (repeat--)
	{
		cin >> n;

		vector<int> dest(n);
		for (auto& elem : dest) cin >> elem;

		int ret = 0;
		for (int i = n-1; i > 0 ; --i) {
			for (int j = 0; j < i; ++j) {
				if (dest[j] > dest[j + 1]) {
					swap<int>(dest[j], dest[j + 1]);
					ret++;
				}
			}
		}
		cout << ret << endl;
	}

}