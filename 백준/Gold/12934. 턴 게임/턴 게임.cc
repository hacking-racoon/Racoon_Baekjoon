#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;

int main(){
	unsigned long long x, y;
	unsigned long long n;
	long double tmp;
	cin >> x >> y;

	n = tmp = (sqrtl(1 + (x + y) * 8) - 1) / 2;

	if (tmp - n != 0) 
	{
		cout << -1 << endl;
	}
	else
	{
		unsigned long long ret = 0;
		unsigned long long accumul = 0;
		long long int i = n;
		for (; i > 0; --i)
		{
			if ((accumul + i) <= (x))
			{
				ret++;
				accumul += i;
			}
			else
			{
				--i;
				break;
			}
		}

		if (accumul == (x))
		{
			cout << ret << endl;
		}
		else if (((x) - accumul) <= i)
		{
			cout << ret + 1 << endl;
		}
		else
		{
			cout << -1 << endl;
		}
	}

}