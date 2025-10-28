#include <iostream>
#include <string>
#include <algorithm>

int main() {

    int t;
    std::cin >> t;

    while (t--) {

        int n;
        std::string str1;
        std::string str2;

        std::cin >> n;
        std::cin >> str1 >> str2;

        sort(str1.begin(), str1.end());
        sort(str2.begin(), str2.end());

        if (str1 == str2) {
            std::cout << "YES" << std::endl;
        } else {
            std::cout << "NO" << std::endl;
        }
    }

    return 0;
}