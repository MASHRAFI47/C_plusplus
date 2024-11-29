#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    while (1)
    {
        int first = s.find("ocococo");
        int second = s.find("ococo");
        int third = s.find("oco");

        if (first != -1)
        {
            // s.erase(first, 7);
            s.replace(first, 7, "***");
        }
        else if (second != -1)
        {
            // s.erase(second, 5);
            s.replace(second, 5, "***");
        }
        else if (third != -1)
        {
            // s.erase(third, 3);
            s.replace(third, 3, "***");
        }
        else {
            break;
        }
    }

    cout << s << endl;

    return 0;
}