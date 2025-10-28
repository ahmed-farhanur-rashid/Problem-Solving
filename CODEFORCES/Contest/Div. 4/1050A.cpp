#include <iostream>
 
int main () {
 
    int t;
    int x;
    int n;
 
    std::cin >> t;
 
    while (t--) {
 
        std::cin >> x >> n;
 
        if (n % 2 == 1) {
            std::cout<< x << std::endl;
        }
        else {
            std::cout<< 0 << std::endl;
        }
    }
}