#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int mx = 0, w;
        for (int i = 1; i <= n; i++)
        {
            int num, q;
            cin >> num >> q;
            if (num <= 10)
            {
                if (mx < q)
                {
                    mx = q;
                    w = i;
                }
            }
        }
        cout << w << endl;
    }
    return 0;
}