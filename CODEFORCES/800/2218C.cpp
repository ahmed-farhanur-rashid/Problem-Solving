#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> small, median, big;

        for (int i = 1; i <= n; i++) {
            small.push_back(i);
        }

        for (int i = n + 1; i <= 3 * n; i += 2) {
            median.push_back(i);
            big.push_back(i + 1);
        }

        for (int i = 0; i < n; i++) {
            cout << small[i] << " " << median[i] << " " << big[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}