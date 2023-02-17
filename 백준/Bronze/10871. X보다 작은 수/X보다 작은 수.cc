#include <iostream>
#include <string>
#include <deque>
using namespace std;

int idx[27];

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);

	int N, X, tmp;
	cin >> N >> X;

	for (int i = 0; i < N; ++i)
	{
		cin >> tmp;
		if (tmp < X) cout << tmp << ' ';
	}
	cout << endl;

}