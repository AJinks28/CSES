#include <bits/stdc++.h>
using namespace std;
// easy
int main()
{
    long long n;
    cin >> n;
    if (n == 1)
        cout << 1 << endl;
    else if (n == 2 || n == 3)
        cout << "NO SOLUTION" << endl;

    else
    {
        for (long long i = 1; i <= n; i++)
        {
            if (i % 2 == 0)
                cout << i << " ";
        }
        for (long long i = 1; i <= n; i++)
        {
            if (i % 2 != 0)
                cout << i << " ";
        }
    }
    return 0;
}