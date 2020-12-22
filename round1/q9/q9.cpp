#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int _T;
    cin >> _T;
    while (_T--)
    {
        int x;
        cin >> x;
        if (x % 3 == 0 || x % 4 == 0)
        {
            cout << "No" << endl;
        }
        else
            cout << "Yes" << endl;
    }

    return 0;
}
