#include <bits/stdc++.h>
using namespace std;

long long get_invs(string& s) {
	long long invs = 0;
	int ones = 0;
	for (char c : s) {
		if (c == '1') ones++;
		else invs += ones;
	}
	return invs;
}

bool cmp(string &s1, string &s2) {
	return count(begin(s1), end(s1), '1') < count(begin(s2), end(s2), '1');
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, m;
		cin >> n >> m;
		vector<string> a(n);
		for (string &s : a) cin >> s;
		sort(begin(a), end(a), cmp);
		string newstr;
		for (string &s : a) newstr += s;
		cout << get_invs(newstr) << '\n';
	}
	return 0;
}
