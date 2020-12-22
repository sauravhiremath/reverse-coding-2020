#include <bits/stdc++.h>
using namespace std;

int fact(int n)
{
    int factorial = 1;
    for (int i = 2; i <= n; i++)
        factorial = factorial * i;
    return factorial;
}

int main()
{

    int _T;
    cin >> _T;
    while (_T--)
    {
        int n, k;
        cin >> n >> k;
        int ans = fact(n) / (fact(k) * fact(n - k));
        cout << ans << endl;
    }

    return 0;
}
