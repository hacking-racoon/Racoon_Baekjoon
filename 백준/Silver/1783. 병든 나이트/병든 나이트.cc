#include<iostream>
#include<string>
#include<functional>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	int n, m, k;
	cin >> n >> m;
	//n은 세로, m은 가로
	
	if (n == 1) {
		k = 0;
	}
	else if (n == 2) {
		k = ((m - 1) / 2 > 3 ? 3 : (m - 1) / 2);
	}
	else if (m < 7) {
		k = ((m - 1) > 3 ? 3 : (m - 1));
	}
	else {
		k = 4 + (m - 7);
	}
	cout << k + 1 << endl;

}