#include <bits/stdc++.h>
using namespace std;

int main()
{
    int _T;
    cin >> _T;
    for (int i = 0; i < _T; i++)
    {
        string str;
        char c1, c2;
        vector<char> v;
        cin >> c1 >> c2 >> str;
        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] == c1)
                v.push_back(c2);
            else if (str[i] == c2)
                v.push_back(c1);
        }
        if (v.size() == 0)
        {
            cout << "EMPTY" << endl;
        }
        else
        {
            for (auto x : v)
                cout << x;
            cout << endl;
        }
    }
    return 0;
}