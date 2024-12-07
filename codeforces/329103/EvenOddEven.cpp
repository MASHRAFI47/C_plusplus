#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int evenCount = 0;
        int oddCount = 0;

        if (n % 2 != 0)
        {
            cout << -1 << endl;
            continue;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                if ((arr[i] % 2) == 0)
                {
                    evenCount++;
                }
                else
                {
                    oddCount++;
                }
            }
        }

        int valueToBeMade = n / 2;
        //cout << "Value: " << valueToBeMade << endl;
        int count = 0;

        if(evenCount == oddCount) {
            cout << 0 << endl;
            continue;
        }
        else if(evenCount > valueToBeMade) {
            for(int i = evenCount; i > valueToBeMade; i--) {
                count++;
            }
        }
        else if(evenCount < valueToBeMade) {
            for(int i = evenCount; i < valueToBeMade; i++) {
                count++;
            }
        }

        cout << count << endl;
        //cout << evenCount << " " << oddCount << endl;
        // cout << oddCount << endl;
    }

    return 0;
}