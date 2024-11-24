#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();

    int antonCount = 0;
    int danikCount = 0;

    string s;
    getline(cin, s);

    for (char c : s)
    {
        if (c == 'A')
        {
            antonCount++;
        }
        else if (c == 'D')
        {
            danikCount++;
        }
    }

    if (antonCount > danikCount)
    {
        cout << "Anton" << endl;
    }
    else if (danikCount > antonCount)
    {
        cout << "Danik" << endl;
    }
    else
    {
        cout << "Friendship" << endl;
    }

    return 0;
}