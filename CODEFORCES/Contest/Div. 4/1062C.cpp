#include <iostream>
#include <vector>
#include <algorithm>

bool isEven (int x) {
    return x % 2 == 0; // true for even, false for odd
}

int main()
{
    // Loic: If at least any one even and one odd number exist, we can sort the array
    int t;
    std::cin >> t;

    while (t--)
    {

        int n;
        int even_count = 0;
        int odd_count = 0;
        std::vector<int> arr;

        std::cin >> n;

        for (int i = 0; i < n; i++) {

            int x;

            std::cin >> x;

            if (isEven(x)) {
                even_count++;
            } else {
                odd_count++;
            }
            arr.push_back(x);
        }
        
        if (even_count >= 1 && odd_count >= 1) {
            std::sort(arr.begin(), arr.end());
        }

        for (int i = 0; i < n; i++) {
            std::cout << arr[i] << " ";
        }

        arr.clear();
    }
    return 0;
}
