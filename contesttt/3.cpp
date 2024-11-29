#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    bool isPrime = true;
    bool sumPrime = true;


    if (n <= 1)
    {
        isPrime = false;
    }
    else
    {
        for (long long i = 2; i <= sqrt(n); i++)
        {
            if ((n % i) == 0)
            {
                isPrime = false;
                break;
            }
        }

        // if(isPrime) {
        //     cout << "Prime" << endl;
        // }
        // else {
        //     cout << "NOt" << endl;
        // }

        long long sum = 0;
        while (n != 0)
        {
            long long rem = n % 10;
            sum += rem;
            n = n / 10;
        }

        for (long long i = 2; i <= sqrt(sum); i++)
        {
            if ((sum % i) == 0)
            {
                sumPrime = false;
                break;
            }
        }
    }

    if (isPrime && sumPrime)
    {
        cout << "Freedom!" << endl;
    }
    else
    {
        cout << "Bad luck!" << endl;
    }
    return 0;
}