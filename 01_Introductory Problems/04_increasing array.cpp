#include <bits/stdc++.h>
using namespace std;
// easy
int main()
{
    long long n;
    cin >> n;
    vector<long long> nums(n);
    for (long long i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        nums[i] = x;
    }
    long long moves = 0;
    for (long long i = 1; i < n; i++)
    {
        if (nums[i] < nums[i - 1])
        {
            moves += nums[i - 1] - nums[i];
            nums[i] = nums[i - 1];
        }
    }
    cout << moves << endl;
    return 0;
}