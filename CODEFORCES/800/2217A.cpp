#include <bits/stdc++.h>

using namespace std;

int main () {

    int t;
    cin >> t;
    while (t--) {
        int n;
        int k;
        int sum = 0;
        cin >> n >> k;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
        }

        if (sum % 2 == 1) {
            cout << "YES\n";
        } else if ((n * k) % 2 == 0) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}