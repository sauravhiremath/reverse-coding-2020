#include <bits/stdc++.h>
using namespace std;

int highestPowerof2(int n) 
{ 
    // Invalid input 
    if (n < 1) 
        return 0; 
  
    int res = 1; 
  
    // Try all powers starting from 2^1 
    for (int i=0; i<8*sizeof(int); i++) 
    { 
        int curr = 1 << i; 
  
        // If current power is more than n, break 
        if (curr > n) 
           break; 
  
        res = curr; 
    } 
  
    return res; 
} 

int main() {
    int t;
    cin >> t;

    for(int i = 0; i < t; i ++) {
        int n;
        cin >> n;

        int high = highestPowerof2(n);

        for (int j = high + 1; j <= n; j++) {
            cout << j << " ";
        }

        for (int j = 1; j <= high - 1; j++) {
            cout << j << " ";
        }

        cout << high << endl;
    }
} 