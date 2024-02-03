#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a[8][8];
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                char x;
                cin >> x;
                if (x != '.')
                {
                    cout << x;
                }
            }
        }
        cout<<"\n";
    }
}