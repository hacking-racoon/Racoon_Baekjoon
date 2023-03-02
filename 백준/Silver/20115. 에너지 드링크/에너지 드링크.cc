#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int N;
	cin >> N;

	vector<long double> drinks(N);
	for (int i = 0; i < N; ++i)
	{
		cin >> drinks[i];
	}

	sort(drinks.begin(), drinks.end());

	for (int i = 0; i < N-1 ; ++i)
	{
		drinks[drinks.size() - 1] += drinks[i] / 2;
	}

	cout << drinks[N-1] << endl;
}