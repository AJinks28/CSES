#include <bits/stdc++.h>
using namespace std;
// medium **
// some maths :(
int main()
{
    long long n;
    cin >> n;

    for (long long i = 1; i <= n; i++)
    {
        long long cnt = (i * i) * (i * i - 1) / 2 - 4 * (i - 1) * (i - 2);
        cout << cnt << endl;
    }
    return 0;
}