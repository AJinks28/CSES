#include <bits/stdc++.h>
using namespace std;
// easy
int main()
{
    string s;
    cin >> s;
    int n = s.size();
    int max_cnt = 1, cnt = 1;
    for (int i = 1; i < n; i++)
    {
        if (s[i] == s[i - 1])
            cnt++;
        else
            cnt = 1;
        max_cnt = max(max_cnt, cnt);
    }
    cout << max_cnt << endl;
    return 0;
}