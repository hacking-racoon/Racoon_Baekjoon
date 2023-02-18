#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int checked[51];

int main(){
	int N, K;
	cin >> N >> K;

	vector<int> v(N);
	for (int i = 0; i < N; ++i)
	{
		cin >> v[i];
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < N; ++i)
	{
		while (v[i] <= 50)
		{
			if (checked[v[i]] == 0) {
				checked[v[i]] = 1;
				break;
			}

			v[i] += K;
		}
	}

	bool isPossible = true;
	for (int i = 1; i <= N; ++i) 
	{
		if (checked[i] == 0)
		{
			isPossible = false;
			break;
		}
	}

	if (isPossible)
	{
		cout << 1 << endl;
	}
	else
	{
		cout << 0 << endl;
	}
}