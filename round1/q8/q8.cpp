#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

void primeSum(long long n)
{
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));

    for (long long p = 2; p * p <= n; p++)
    {
        if (prime[p] == true)
        {
            for (long long i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
    long long sum1 = 0;

    for (long long p = 2; p <= n; p++)
        if (prime[p])
        {
            while (n % p == 0)
            {
                n /= p;
                sum1 = sum1 + p;
            }
        }
    cout << sum1 << endl;
}

int main()
{
    int _T;
    cin >> _T;
    while (_T--)
    {
        long long n;
        cin >> n;
        primeSum(n);
    }
    return 0;
}
