#include <bits/stdc++.h>
using namespace std;

int fib(int n)
{
    if (n <= 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}

int main()
{
    int _T;
    cin >> _T;
    while (_T--)
    {
        int n;
        cin >> n;

        long long ans = fib(n);

        cout << ans << endl;
    }
    return 0;
}