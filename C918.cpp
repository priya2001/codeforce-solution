#include <bits/stdc++.h>
using namespace std;
main()
{
    long long int t, i, a, s, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        s = 0;
        for (i = 0; i < n; i++)
        {
            cin >> a;
            s = s + a;
        }
        i = sqrt(s);
        if (s == i * i)
        {
            cout << "YES\n";
        }

        else
        {
            cout << "NO\n";
        }
    }
}