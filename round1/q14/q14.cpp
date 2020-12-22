#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

string binCount(int n)
{
    string s = "0";
    for (int i = 1; i < n; i++)
    {
        string temp;
        for (int i = 0; i < s.length(); i++)
        {
            if (s.at(i) == '0')
                temp += '1';
            else
                temp += '0';
        }
        s += temp;
    }

    return s;
}

int main()
{
    string str = binCount(10);
    int _T;
    cin >> _T;
    while (_T--)
    {
        int n;
        cin >> n;
        cout << str[n] << endl;
    }
    return 0;
}
