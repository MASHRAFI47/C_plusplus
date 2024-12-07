#include <bits/stdc++.h>
using namespace std;

class Name
{
public:
    string s;
};

bool cmp(Name a, Name b)
{
    if (a.s < b.s)
    {
        return true;
    }
    else
        return false;
}

int main()
{
    int n;
    cin >> n;
    Name ar[n];

    for (int i = 0; i < n; i++)
    {
        cin >> ar[i].s;
    }

    sort(ar, ar + n, cmp);

    for (int i = 0; i < n; i++)
    {
        cout << ar[i].s << endl;
    }
}