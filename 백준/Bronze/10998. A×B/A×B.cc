#include <iostream>
#include <stdio.h>
#include <string>
#include <deque>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cout.tie(nullptr);

	int A, B;

	scanf("%d %d", &A, &B);
	cout << A * B << endl;
}