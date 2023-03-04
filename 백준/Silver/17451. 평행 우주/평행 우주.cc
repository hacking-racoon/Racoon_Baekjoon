#include <iostream>
#include <deque>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string>
using namespace std;

typedef unsigned long long ull;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	ull n;
	cin >> n;

	vector<ull> val(n);
	for (auto& elem : val)
	{
		cin >> elem;
	}

	ull currRes = val[n - 1];
	for (int i = n - 2; i >= 0; --i)
	{
		if (currRes <= val[i])
		{
			currRes = val[i];
		}
		else if ((currRes % val[i]) != 0)
		{
			currRes = val[i] * ((currRes / val[i]) + 1);
		}
		else
		{
			currRes = val[i] * (currRes / val[i]);
		}
	}

	cout << currRes << endl;
}