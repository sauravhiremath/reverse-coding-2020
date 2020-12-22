#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int _T;
    cin >> _T;
    while (_T--)
    {
        string s;
        cin >> s;

        long long temp = 0;

        for (int i = 0; i < s.size(); i++)
        {
            temp = temp + (int)(s[i]);
        }
        cout << (char)(round(temp * 1.0 / s.size())) << endl;
    }
    return 0;
}