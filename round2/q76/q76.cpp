#include <bits/stdc++.h>
using namespace std;

int solve(long long inp1, long long inp2)

{
    long temp;
    int ans;
    long counter;

    ans = 1;
    if (inp1 == inp2)
    {
        ans = 1;
    }
    else
    {
        if (inp2 - inp1 < 5)
        {
            counter = inp1 + 1;
            while (counter <= inp2)
            {
                temp = (long)ans * (counter % 10);
                ans = (int)temp + (int)(temp / 10) * -10;
                counter = counter + 1;
            }
            ans = ans % 10;
        }
        else
        {
            ans = 0;
        }
    }

    return ans;
}

int main()
{
    int _T;
    cin >> _T;
    while (_T--)
    {
        long long a, b;
        cin >> a >> b;

        long long ans = solve(a, b);

        cout << ans << endl;
    }
    return 0;
}