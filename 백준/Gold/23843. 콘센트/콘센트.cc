#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

#define m1in(a, b) (a) > (b) ? (b) : (a)
priority_queue<int, vector<int>> pq;

int main()
{
	int n, m, tmp;
	cin >> n >> m;

	vector<int> devices(n);

	for (int i = 0; i < n; ++i)
	{
		cin >> tmp;
		devices[i] = tmp * (-1);
	}

	sort(devices.begin(), devices.end());

	int i;
	for (i = 0; i < m; ++i)
	{
		if (n <= i) break;
		pq.push(devices[i]);
	}

	for (; i < n; ++i)
	{
		tmp = pq.top() + devices[i];
		pq.pop();
		pq.push(tmp);
	}

	int ret = 987654321;
	while (!pq.empty())
	{
		ret = m1in(ret, pq.top());
		pq.pop();
	}
	cout << ret * (-1) << endl;


}