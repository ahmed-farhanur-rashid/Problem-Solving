#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    int count8 = 0;
    string str;

    cin >> n;
    cin.ignore();
    cin >> str;

    for(int i = 0; i < n; i++)
    {
        if(str[i] == '8') count8++;
    }

    cout << min(count8, (n/11)) << endl;

    return 0;
}