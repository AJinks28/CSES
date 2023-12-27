#include <bits/stdc++.h>
using namespace std;
#define ll long long
// https://japlslounge.com/posts/cses/trailing_zeros/1.htm
int main()
{
    ll n, ans = 0;
    cin >> n;
    while (n > 0)
    {
        n /= 5;
        ans += n;
    }
    cout << ans << endl;
    return 0;
}