#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        int moves = 0;
        int Chip = -1;
        for (int i = 0; i < n; i++) {
            if (a[i] == 1) {
                if (Chip == -1) {
                    Chip = i;
                } else {
                    moves =moves+ i - Chip - 1;
                    Chip = i;
                }
            }
        }
        cout << moves << endl;
    }
    return 0;
}