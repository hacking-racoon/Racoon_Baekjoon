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

enum ATGC{
	ADENINE = 0, CYTOSINE, GUANINE, THYMINE
};
int main() {

	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, m;
	cin >> n >> m;

	vector<string> DNAs(n);
	for (int i = 0; i < n; ++i) cin >> DNAs[i];

	vector<vector<int>> DNACnt(m, vector<int>(4,0));
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			if (DNAs[i][j] == 'A') DNACnt[j][ADENINE]++;
			if (DNAs[i][j] == 'T') DNACnt[j][THYMINE]++;
			if (DNAs[i][j] == 'G') DNACnt[j][GUANINE]++;
			if (DNAs[i][j] == 'C') DNACnt[j][CYTOSINE]++;
		}
	}

	int retHammingDistance = 0;
	string retString = "";

	char strTemplate[4] = { 'A' , 'C' ,'G' ,'T' };

	for (int i = 0; i < m; ++i)
	{
		int maxIdx = -1;
		int currMax = -987654321;
		
		for (int j = 0; j < 4; ++j)
		{
			if (DNACnt[i][j] > currMax)
			{
				maxIdx = j;
				currMax = DNACnt[i][j];
			}
		}

		retString += strTemplate[maxIdx];
		retHammingDistance += (n - currMax);
	}

	cout << retString << endl;
	cout << retHammingDistance << endl;

}