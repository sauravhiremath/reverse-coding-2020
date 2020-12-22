#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        long long int N;
        cin >> N;
        long long int ans = 0;
        int d = log2(N) + 1;
        for (int i = 0; i < d; i++)
        {
            if ((N >> i) & 1)
                continue;
            else
                ans = ans + (1LL << i);
        }
        cout << ans << endl;
    }

    return 0;
}
