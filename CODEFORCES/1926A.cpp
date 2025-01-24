#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int t;
    string str;

    cin >> t;

    while(t--)
    {
        cin >> str;

        vector<int> counter(2, 0);

        // VSCode shows problem if static_cast is not used
        // As the comparison is between int and long long unsigned int otherwise
        
        for(int i = 0; i < static_cast<int>(str.size()); i++)
        {
                counter[str[i] - 'A']++;
        }

        if(counter[0] > counter[1])
            cout << "A" << endl;
        else
            cout << "B" << endl;
    }
}