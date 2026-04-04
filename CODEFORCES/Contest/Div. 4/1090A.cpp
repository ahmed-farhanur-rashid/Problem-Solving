#include <iostream>

using namespace std;

int main () {

    int t;
    int x;
    int y;

    cin >> t;

    while (t--) {
        cin >> x;
        y = max(-67, min(67, x + 1));

        cout << y << endl;
    }

    return 0;
}