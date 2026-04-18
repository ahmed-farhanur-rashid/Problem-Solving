#include <bits/stdc++.h>

using namespace std;

int main () {

    int t;
    int x;

    cin >> t;

    while (t--) {
        int sum = 0;
        vector<int> arr(7);

        for (int i = 0; i < 7; i++) {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());

        for (int i = 0; i < 6; i++) {
            arr[i] = -arr[i];
            sum += arr[i];
        }
        sum += arr[6];
        cout << sum << endl;
    }

    return 0;
}