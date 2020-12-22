#include <bits/stdc++.h>
using namespace std;

int main()
{
    int _T;
    cin >> _T;
    while (_T--)
    {
        int n, k;
        string s;
        cin >> n >> k >> s;
        string temp = s.substr(0, k);
        for (int i = 0; i < n; i++)
        {
            temp = temp + temp;
        }
        cout << temp.substr(0, n) << endl;
    }
}
