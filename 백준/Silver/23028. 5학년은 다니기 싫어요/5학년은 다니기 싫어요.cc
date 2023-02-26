#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string>
using namespace std;

int X[10];
int Y[10];

int main(){
	int N, A, B;

	cin >> N >> A >> B;

	for (int i = 0; i < 10; ++i)
	{
		cin >> X[i] >> Y[i];
	}

	int cnt = 8 - N;

	for (int i = 0; i < cnt; ++i)
	{
		for (int j = 0; j < 6; ++j)
		{
			if (X[i] > 0)
			{
				A += 3;
				B += 3;
				X[i]--;
			}
			else if (Y[i] > 0)
			{
				B += 3;
				Y[i]--;
			}
		}
	}

	if ((A >= 66) && (B >= 130))
	{
		cout << "Nice" << endl;
	}
	else
	{
		cout << "Nae ga wae" << endl;
	}
}