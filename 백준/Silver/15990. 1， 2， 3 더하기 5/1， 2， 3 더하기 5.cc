#include <stdio.h>
#include <vector>
#include <algorithm>

#define MOD  (1'000'000'009)
#define m1ax(a, b) (a) > (b) ? (a) : (b)

using namespace std;

long long DP[100001][3];
int main()
{
	long long repeat, n, currStart;
	scanf("%lld", &repeat);

	currStart = 4;
	DP[1][0] = DP[2][1] = DP[3][0] = DP[3][1] = DP[3][2] = 1;
	while (repeat--)
	{
		scanf("%lld", &n);
		for (int i = currStart; i <= n; ++i)
		{
			for (int j = 1; j <= 3; ++j)
			{
				if (j == 1) 
				{
					//DP[i][j-1] = (DP[i][j - 1] + DP[i - j][0]) % MOD;
					DP[i][j - 1] = (DP[i][j - 1] + DP[i - j][1]) % MOD;
					DP[i][j - 1] = (DP[i][j - 1] + DP[i - j][2]) % MOD;
				}
				else if (j == 2)
				{
					DP[i][j-1] = (DP[i][j - 1] + DP[i - j][0]) % MOD;
					//DP[i][j - 1] = (DP[i][j - 1] + DP[i - j][1]) % MOD;
					DP[i][j - 1] = (DP[i][j - 1] + DP[i - j][2]) % MOD;
				}
				else
				{
					DP[i][j-1] = (DP[i][j - 1] + DP[i - j][0]) % MOD;
					DP[i][j - 1] = (DP[i][j - 1] + DP[i - j][1]) % MOD;
					//DP[i][j - 1] = (DP[i][j - 1] + DP[i - j][2]) % MOD;
				}
			}
		}
		currStart = m1ax(currStart, n+1);

		printf("%lld\n", (DP[n][0] + DP[n][1] + DP[n][2]) % MOD);

	}
}