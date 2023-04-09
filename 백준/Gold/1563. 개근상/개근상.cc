#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <string>
#include <queue>
#include <deque>
using namespace std;

#define m1in(a, b) ((a) > (b) ? (b) : (a))
#define MOD (1000000)
typedef unsigned long long ull;

int DP[1001][3][3];
ull calcCntX(ull len)
{
	return ((len * len) + len) / 2;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int N;
	cin >> N;

	DP[0][0][0] = 1;
	for (int i = 1; i <= N; ++i){
		for (int j = 0; j <= 1; ++j) {
			
				// 출석
					DP[i][j][0] += DP[i - 1][j][0];
					DP[i][j][0] += DP[i - 1][j][1];
					DP[i][j][0] += DP[i - 1][j][2];
				
				// 결석
					DP[i][j][1] += DP[i - 1][j][0];
					DP[i][j][2] += DP[i - 1][j][1];

				// 지각
					if (j != 0) {
						DP[i][j][0] += DP[i - 1][j - 1][0];
						DP[i][j][0] += DP[i - 1][j - 1][1];
						DP[i][j][0] += DP[i - 1][j - 1][2];
					}	
					DP[i][j][0] = DP[i][j][0] % MOD;
					DP[i][j][1] = DP[i][j][1] % MOD;
					DP[i][j][2] = DP[i][j][2] % MOD;
		}
	}

	int ret = 0;
	ret = (ret + DP[N][0][0]) % MOD;
	ret = (ret + DP[N][0][1]) % MOD;
	ret = (ret + DP[N][0][2]) % MOD;
	ret = (ret + DP[N][1][0]) % MOD;
	ret = (ret + DP[N][1][1]) % MOD;
	ret = (ret + DP[N][1][2]) % MOD;

	cout << ret << endl;
}