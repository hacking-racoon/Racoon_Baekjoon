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
		vector<ull> lands; ull tmp;
		do {
			cin >> tmp;
			
			if (tmp == 0) break;
			lands.push_back(tmp);
		
		} while (true);

		sort(lands.begin(), lands.end(), greater<int>());
		int ret = 0; bool fail = false;
		for (int i = 0; i < lands.size(); ++i)
		{
			if (ret + 2 * powl(lands[i], i + 1) <= 5000000)
			{
				ret += 2 * powl(lands[i], i + 1) + 0.0000000001;
			}
			else
			{
				fail = true;
			}
		}
		if (fail)
		{
			cout << "Too expensive" << endl;
		}
		else
		{
			cout << ret << endl;
		}
	}

}