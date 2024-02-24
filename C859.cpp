#include <bits/stdc++.h>
using namespace std;
int t, n;
string a; 
int f = 1;
int main()
{
    cin >> t;  
    while (t--)
    {
        cin >> n >> a;
        for (int i = 0; i < n; i += 2)
        {
            for (int j = 1; j < n; j += 2)
            {
                if (a[i] == a[j])
                {
                    f = 0;
                }
            }
        }
        if (f == 1) // check yes or no.
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        f = 1;
    }
    return 0;
}