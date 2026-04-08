#include <iostream>

using namespace std;

int main() {
    long long t;
    cin >> t;

    while (t--) {

        long long x;
        long long y;

        cin >> x >> y;

        if (((x - 2 * y) % 3 == 0) && (max(0LL, -y) * 6 <= (x - 2 * y))) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}