#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

int summer(int n)
{
    int sum = 0;
    while (n != 0)
    {
        sum = sum + n % 10;
        n = n / 10;
    }
    return sum;
}

int main()
{
    int _T;
    cin >> _T;
    while (_T--)
    {
        int n;
        cin >> n;
        if (n < 10)
        {
            cout << 0 << endl;
            continue;
        }
        long long ans = n ^ summer(n);
        cout << ans << endl;
    }
}
