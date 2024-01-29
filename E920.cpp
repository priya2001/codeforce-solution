#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int h, w, xA, yA, xB, yB;
        cin >> h >> w >> xA >> yA >> xB >> yB;

        bool win;
        string winner;

        if ((xA - xB) % 2 == 0)
        {
            winner = "Bob";
            if (xA >= xB)
            {
                win = false;
            }
            else if (yA == yB)
            {
                win = true;
            }
            else
            {
                int n_turns = (yA < yB) ? (yB - 1) : (w - yB);
                win = (xB - 2 * n_turns >= xA);
            }
        }
        else
        {
            winner = "Alice";

            xA += 1;
            yA += (yB - yA == 0) ? 0 : ((yB - yA > 0) ? 1 : -1);

            if (xA > xB)
            {
                win = false;
            }
            else if (yA == yB)
            {
                win = true;
            }
            else
            {
                int n_turns = (yA < yB) ? (w - yA) : (yA - 1);
                win = (xB - 2 * n_turns >= xA);
            }
        }

        cout << (win ? winner : "Draw") << "\n";
    }
}