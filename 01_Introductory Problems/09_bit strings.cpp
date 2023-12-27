#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 1000000007
// easy
int main()
{
    ll n, ans = 1;
    cin >> n;
    while (n--)
    {
        ans *= 2;
        ans %= MOD;
    }
    cout << ans << endl;
    return 0;
}