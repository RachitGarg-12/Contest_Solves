#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
    int tests;
    cin >> tests;
    int x, y, k, n;
    bool flag = false;
    while (tests--) {
        flag = false;
        cin >> x >> y >> k >> n;
        int p[n], c[n];
        for (int i = 0; i < n; i++) {
            cin >> p[i] >> c[i];
        }
        if (x - y <= 0) {
            cout << "LuckyChef\n";
        } else {
            for (int i = 0; i < n; i++) {
                if (p[i] >= x - y and c[i] <= k) {
                    cout << "LuckyChef\n";
                    flag = true;
                    break;
                }
            }
            if (!flag) {
                cout << "UnluckyChef\n";
            }
        }
    }
    cout << endl;
    return 0;
}