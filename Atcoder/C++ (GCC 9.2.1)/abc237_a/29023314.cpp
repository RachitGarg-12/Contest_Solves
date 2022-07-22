#include <bits/stdc++.h>
using namespace std;
int main(void) {
	long long n;
	long long m = (long long)1 << 31;
	cin >> n;
	if ((-m <= n) && (n < m))cout << "Yes" << endl;
	else cout << "No" << endl;
	return 0;
}