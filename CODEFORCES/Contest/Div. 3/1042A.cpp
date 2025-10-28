#include <iostream>
#include <vector>
 
int main()
{
 
    int test_case = 0;
    std::vector<int> a;
    std::vector<int> b;
 
    std::cin >> test_case;
 
    while (test_case--)
    {
        int n = 0;
        int temp;
        std::cin >> n;
 
        a.clear();
        b.clear();
 
        for (int i = 0; i < n; i++)
        {
            std::cin >> temp;
            a.push_back(temp);
        }
        for (int i = 0; i < n; i++)
        {
            std::cin >> temp;
            b.push_back(temp);
        }
 
        int lever = 1;
        
        for (int i = 0; i < n; i++) 
        {
            if (a[i] > b[i])
                lever += (a[i] - b[i]);
        }
        
        std::cout << lever << std::endl;
    }
    return 0;
}