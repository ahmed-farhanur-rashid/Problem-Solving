#include <iostream>
#include <vector>
#include <algorithm>

bool isOdd (int num) {
    if (num % 2 == 0) return false;
    else return true;
}

void swap (int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {

    int t;
    int n;

    std::cin >> t;

    while (t--) {

        bool solvable = true;

        std::cin >> n;

        std::vector<int> arr(n);

        for (int i = 0; i < n; ++i) {
            std::cin >> arr[i];
        }

        std::sort (arr.begin(), arr.end());

        for (int i = 0; i < n - 1; ++i) {
            
            if (isOdd(i) && arr[i] != arr[i+1]) {
                solvable = false;
                break;
            }
        }

        if (solvable) {
            std::cout << "YES" << std::endl;
        } else {
            std::cout << "NO" << std::endl;
        }
    }
}
