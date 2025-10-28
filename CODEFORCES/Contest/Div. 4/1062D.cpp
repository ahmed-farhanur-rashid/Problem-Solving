#include <bits/stdc++.h>
using namespace std;
using int64 = long long;

// Function to compute gcd
int64 gcd(int64 a, int64 b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int64> a(n);
        for (int i = 0; i < n; ++i) cin >> a[i];

        const int64 MAX_X = 1000000000000000000LL;
        int64 ans = -1;

        for (int64 x = 2; x <= MAX_X; ++x) {
            for (int i = 0; i < n; ++i) {
                if (gcd(a[i], x) == 1) {
                    ans = x;
                    break;
                }
            }
            if (ans != -1) break;
        }

        cout << ans << "\n";
    }

    return 0;
}
