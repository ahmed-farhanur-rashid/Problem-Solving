#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int num;
    bool isLucky = false;
    vector<int> luckyNumbers = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};

    cin >> num;

    for(int i = 0; i < static_cast<int>(luckyNumbers.size()); i++)
    {
        if(num % luckyNumbers[i] == 0)
        {
            isLucky = true;
            break;
        }
    }

    if(isLucky)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}