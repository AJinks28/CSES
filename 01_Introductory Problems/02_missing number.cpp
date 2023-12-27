#include <bits/stdc++.h>
using namespace std;
// xor apprach is imp
int main()
{
    long long n;
    cin >> n;
    long long xor_n = 0;
    for (int i = 0; i < n - 1; i++)
    {
        long long x;
        cin >> x;
        xor_n ^= x;
    }
    // cout << xor_n << "before ";
    for (int i = 1; i <= n; i++)
    {
        xor_n ^= i;
    }
    cout << xor_n << endl;
    return 0;
}