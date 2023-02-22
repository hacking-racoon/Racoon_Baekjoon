#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string>
using namespace std;

#define m1in(a, b) ((a) > (b) ? (b) : (a))

int				DP[100001][6];
pair<int, int>  desk[100001];

int main(){
	int tmp1, tmp2;
	int N;

	cin >> N;

	for (int i = 1; i <= N; ++i)
	{
		cin >> tmp1 >> tmp2;
		desk[i] = { tmp1, tmp2 };
	}
	int m1ax = -987654321;
	int currGrade = 9876543211;
	for (int i = 1; i <= N; ++i) 
	{
		DP[i][desk[i].first] = DP[i - 1][desk[i].first] + 1;
		DP[i][desk[i].second] = DP[i - 1][desk[i].second] + 1;

		if (m1ax <= DP[i][desk[i].first]) {
			currGrade = (m1ax == DP[i][desk[i].first]) ? m1in(desk[i].first, currGrade) : desk[i].first;
			m1ax = DP[i][desk[i].first];
		}
		if (m1ax <= DP[i][desk[i].second]) {
			currGrade = (m1ax == DP[i][desk[i].second]) ? m1in(desk[i].second, currGrade) : desk[i].second;;
			m1ax = DP[i][desk[i].second];
		}
	}

	cout << m1ax << ' ' << currGrade << endl;
}