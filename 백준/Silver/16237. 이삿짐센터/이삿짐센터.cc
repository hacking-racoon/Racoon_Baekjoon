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
using namespace std;
#define m1in(a,b) ((b) > (a) ? (a) : (b))
#define m1ax(a,b) ((b) > (a) ? (b) : (a))

typedef unsigned long long ull;

double logbase(double a, double base)
{
	return log(a) / log(base);
}


int main() {

	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int A, B, C, D, E;
	cin >> A >> B >> C >> D >> E;

	int ret = E;

	int onePlusFour = m1in(A, D);

	A -= onePlusFour;
	D -= onePlusFour;
	ret += onePlusFour;

	ret += D;


	int twoPlusThree = m1in(B, C);

	B -= twoPlusThree;
	C -= twoPlusThree;
	ret += twoPlusThree;


	if (B == 0 && C == 0) // 2, 3 모두 0
	{
		ret += A / 5;
		ret += A % 5 == 0 ? 0 : 1;
		A = 0;
	}
	else if (B == 0) // 2 = 0, 3은 남음
	{
		A -= C * 2;
		ret += C;
	}
	else // 3 == 0, 2는 남음
	{
		int four = B / 2;
		int two = B % 2;

		ret += four;
		A -= four;

		ret += two;
		A -= two * 3;


	}

	if (A > 0)
	{
		ret += A / 5;
		ret += A % 5 == 0 ? 0 : 1;
	}
	cout << ret << endl;



}