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
#define m1in(a,b) ((b) > (a) ? (a) : (b))
#define m1ax(a,b) ((b) > (a) ? (b) : (a))
#define MOD 1000000009 

typedef unsigned long long ull;

using namespace std;

bool cmp(const tuple<int, int, int>& l, const tuple<int, int, int>& r)
{
	long double valueOfLeft = static_cast<long double>(get<1>(l)) / get<0>(l);
	long double valueOfRight = static_cast<long double>(get<1>(r)) / get<0>(r);
	
	if (valueOfLeft != valueOfRight) {
		return valueOfLeft > valueOfRight;
	}
	else
	{
		return get<2>(l) < get<2>(r);
	}
}

int main() {

	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n;
	cin >> n;

	vector<tuple<int, int, int>> tasks(n);

	int tmpTime, tmpCompensation;
	for (int i = 0; i < n; ++i) {
		cin >> tmpTime >> tmpCompensation;
		tasks[i] = { tmpTime, tmpCompensation, i + 1 };
	}

	sort(tasks.begin(), tasks.end(), cmp);

	for (const auto& elem : tasks)
	{
		cout << get<2>(elem) << ' ';
	}
	cout << endl;
}