#include <iostream>
 
int main () {
 
    int t;
    int n;
    int m;
    int x;
    int y;
    int temp;
 
    std::cin >> t;
 
    while (t--) {
 
        std::cin >> n >> m >> x >> y;
 
        for (int i = 0; i < n; i++) {
            std::cin >> temp;
        }
 
        for (int i = 0; i < m; i++) {
            std::cin >> temp;
        }
 
        std::cout << n + m << std::endl;
    }
}