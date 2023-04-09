#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string>
#include <queue>
#include <deque>
using namespace std;

#define m1in(a, b) ((a) > (b) ? (b) : (a))
typedef unsigned long long ull;

ull calcCntX(ull len)
{
	return ((len * len) + len) / 2;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int N;
	cin >> N;

	vector<int> v1(N);
	for (auto& elem : v1) cin >> elem;

	sort(v1.begin(), v1.end());

	deque<int> resArr;
	bool isOdd = true;
	for (int i = 0; i < N/2; ++i) 
	{
		if (isOdd){
			resArr.push_front(v1[i]);
			resArr.push_back(v1[N - 1 - i]);
			isOdd = !isOdd;
		}
		else
		{
			resArr.push_back(v1[i]);
			resArr.push_front(v1[N - 1 - i]);
			isOdd = !isOdd;
		}
	}

	if (N % 2 != 0) {
		if (abs(resArr[0] - v1[N / 2]) > abs(resArr[resArr.size() - 1] - v1[N / 2])) {
			resArr.push_front(v1[N / 2]);
		}
		else
		{
			resArr.push_back(v1[N / 2]);
		}
	}

	ull res = 0;
	for (int i = 0; i < N - 1; ++i)
	{
		res += abs(resArr[i] - resArr[i + 1]);
	}
	cout << res << endl;

}