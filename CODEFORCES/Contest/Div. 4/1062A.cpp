#include <iostream>

int main() {

    int t;
    std::cin >> t;

    while (t--) {
        int a, b, c, d;
        std::cin >> a >> b >> c >> d;
        
        if (a == b && b ==c && c ==d) {
            std::cout << "YES" << std::endl;
        } else {
            std::cout << "NO" << std::endl;
        }
    }

    return 0;
}