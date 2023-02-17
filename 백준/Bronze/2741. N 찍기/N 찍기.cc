#include <iostream>
#include <string>
#include <deque>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);

	int N;
	cin >> N;

	for (int i = 1; i <= N; ++i)
	{
		cout << i << '\n';
	}
}