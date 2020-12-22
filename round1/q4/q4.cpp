#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int _T;
    cin >> _T;
    while (_T--)
    {
        int n;
        int oddCount = 0;
        int evenCount = 0;
        vector<int> arr(n);

        cin >> n;

        for (int &i : arr)
            cin >> i;

        for (int i : arr)
        {
            if (i & 1)
                oddCount++;
            else
                evenCount++;
        }

        if (!(n & 1))
        {
            if (evenCount > oddCount)
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
        else
        {
            if (oddCount > evenCount)
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
    }
    return 0;
}
