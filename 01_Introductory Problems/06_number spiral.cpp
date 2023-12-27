#include <bits/stdc++.h>
using namespace std;
// medium *
// some imp maths
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long x, y;
        cin >> x >> y;

        long long maxi = max(x, y);
        long long square = (maxi - 1) * (maxi - 1);

        if (maxi % 2 == 0)
        {
            if (x < y)
                cout << square + x << endl;
            else
                cout << square + 2 * x - y << endl;
        }
        else
        {
            if (x < y)
                cout << square + 2 * y - x << endl;
            else
                cout << square + y << endl;
        }
    }
    return 0;
}