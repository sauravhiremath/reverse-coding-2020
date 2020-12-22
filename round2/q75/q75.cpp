#include <bits/stdc++.h>
using namespace std;

int reverse(int n)
{
  int temp;
  int reversed;
  
  reversed = 0;
  temp = n;
  while (temp != 0) {
    reversed = reversed * 10 + temp % 10;
    temp = temp / 10;
  }
  
  return reversed;
}

int main()
{
    int _T;
    cin >> _T;
    while (_T--)
    {
        int a, b;
        cin >> a >> b;

        long long ans = reverse(a ^ b);

        cout << ans << endl;
    }
    return 0;
}