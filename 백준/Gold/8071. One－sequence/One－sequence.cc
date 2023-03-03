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

	long long int n, S;
	cin >> n >> S;

	long long int maxVal = (n-1) * (n) / 2;
	long long int minVal = -maxVal;

	long long int diff;
	diff = maxVal - S;


	if (S > maxVal || S < minVal || diff % 2 == 1)
	{
		cout << "NIE" << endl;
	}
	else
	{
		vector<int> v(n - 1, 1);
		long long int effect = n * 2 - 2;

		while (diff != 0)
		{
			if (effect <= diff)
			{
				diff -= effect;
				v[effect / 2 - 1] = -1;
				effect -= 2;
			}
			else
			{
				effect -= 2;
			}
		}
		int currOutput = 0;
		cout << currOutput << endl;
		for (int i = n - 2; i >= 0; --i)
		{
			currOutput += v[i];
			cout << currOutput << endl;
		}
	}

	

}