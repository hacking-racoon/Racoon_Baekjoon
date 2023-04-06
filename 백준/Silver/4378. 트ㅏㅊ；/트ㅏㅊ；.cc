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
#define MOD 1000000009
typedef unsigned long long ull;

int searchStringIdx(const string& str, char elem)
{
	for (int i = 0; i < str.size(); ++i)
	{
		if (str[i] == elem) return i;
	}
	
	return -1;
}
int main() {

	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	string str;
	while (getline(cin, str)) {

		string qwerty1 = "`1234567890-=";
		string qwerty2 = "QWERTYUIOP[]\\";
		string qwerty3 = "ASDFGHJKL;'";
		string qwerty4 = "ZXCVBNM,./";

		for (int i = 0; i < str.size(); ++i)
		{
			if (str[i] == ' ') continue;

			int idx = -1;
			if ((idx = searchStringIdx(qwerty1, str[i])) != -1)
			{
				str[i] = qwerty1[idx - 1];
			}
			else if ((idx = searchStringIdx(qwerty2, str[i])) != -1)
			{
				str[i] = qwerty2[idx - 1];
			}
			else if ((idx = searchStringIdx(qwerty3, str[i])) != -1)
			{
				str[i] = qwerty3[idx - 1];
			}
			else if ((idx = searchStringIdx(qwerty4, str[i])) != -1)
			{
				str[i] = qwerty4[idx - 1];
			}
		}

		cout << str << endl;
	}
}