#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        string str, str2;
        cin >> str >> str2;
        while (1)
        {
            // cout << s << x;

            int pos = str.find(str2);
            int len = str2.size();
            if (pos != -1)
            {
                str.replace(pos, len, "#");
            }
            else
            {
                break;
            }
        }
        cout << str << endl;
    }

    return 0;
}