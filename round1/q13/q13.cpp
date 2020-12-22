#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

set<int> arrSet;

int primeFactors(int n)
{
    arrSet.clear();
    while (n % 2 == 0)
    {
        arrSet.insert(2);
        n = n / 2;
    }
    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        while (n % i == 0)
        {
            arrSet.insert(i);
            n = n / i;
        }
    }
    if (n > 2)
        arrSet.insert(n);
    return arrSet.size();
}

int main()
{
    int _T;
    cin >> _T;
    while (_T--)
    {
        int x;
        cin >> x;
        cout << primeFactors(x) << endl;
    }

    return 0;
}
