// #include <iostream>
// #include <vector>

// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         int sum = 0;
//         for (int i = 1; i <= n; i++) {
//             int num = i;
//             int digitSum = 0;
//             while (num > 0) {
//                 digitSum += num % 10;
//                 num /= 10;
//             }
//             sum += digitSum;
//         }
//         cout << sum << endl;
//     }
//     return 0;
// }



#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> dp(n+1);
        vector<int> Sum(n+1);
        dp[0] = 0;
        dp[1] = 1;
        Sum[1] = 1;
        for (int i = 2; i <= n; i++) {
            int num = i;
            int s = 0;
            while (num > 0) {
                s=s+ num % 10;
                num=num/10;
            }
            dp[i] = dp[i-1] + s;
            Sum[i] = Sum[i-1] + s;
        }
        cout << Sum[n] << endl;
    }
    return 0;
}