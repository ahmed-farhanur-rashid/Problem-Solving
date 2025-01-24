#include <iostream>
#include <string>

using namespace std;

int main()
{
    int t;

    cin >> t;

    while(t--)
    {
        int firstOccurrence = -1;
        int lastOccurrence = -1;
        int length;
        string str;

        cin >> length >> str;

        for(int i = 0; i < length; i++)
        {
            if(firstOccurrence == -1 && str[i] == 'B')
            {
                firstOccurrence = i;
            }
            if(str[i] == 'B')
            {
                lastOccurrence = i;
            }
        }

        cout << lastOccurrence - firstOccurrence + 1 << endl;
    }
}