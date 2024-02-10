#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k, x;
        cin >> n >> m >> k;
        set<int> q1, q2, q3;
        for (int i = 1; i <= n; i++)
        {
            cin >> x;
            if (x <= k)
            {
                q1.insert(x);
                q3.insert(x);
            }
        }
        for (int i = 1; i <= m; i++)
        {
            cin >> x;
            if (x <= k)
            {
                q2.insert(x);
                q3.insert(x);
            }
        }
        if (q1.size() >= k / 2 && q2.size() >= k / 2 && q3.size() == k)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}