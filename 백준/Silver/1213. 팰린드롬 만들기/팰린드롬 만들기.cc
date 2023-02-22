#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string>
using namespace std;

int cnt[26];
int main(){
	string str;
	cin >> str;

	int odd = 0;
	for (int i = 0; i < str.size(); ++i)
	{
		cnt[str[i] - 'A']++;
	}

	for (int i = 0; i < 26; ++i)
	{
		if (cnt[i] % 2 != 0)
		{
			odd++;
		}

		if (odd > 1)
		{
			break;
		}
	}

	if (odd > 1)
	{
		cout << "I'm Sorry Hansoo" << endl;
	}
	else
	{
		for (int i = 0; i < 26; ++i)
		{
			for (int j = 0; j < cnt[i] / 2; ++j)
			{
				cout << static_cast<char>('A' + i);

			}
		}
		for (int i = 0; i < 26; ++i)
		{
			if (cnt[i] % 2 == 1)
			{
				cout << static_cast<char>('A' + i);
			}
		}

		for (int i = 25; i >= 0; --i)
		{
			for (int j = 0; j < cnt[i] / 2; ++j)
			{
				cout << static_cast<char>('A' + i);

			}
		}
		cout << endl;
	}
}