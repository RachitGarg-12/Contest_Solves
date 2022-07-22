#include<bits/stdc++.h>
using namespace std;

#define endl '\n'

int main () {
    ios_base::sync_with_stdio(0); cin.tie(0);

    long long n;
    cin >> n;

    long long mn = LLONG_MAX;
    for (long long i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            long long ans = (i - 1) + ((n / i) - 1);
            mn = min(mn, ans);
        }
    }

    cout << mn << endl;

    return 0;
}