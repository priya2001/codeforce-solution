#include <iostream>
#include <string>
using namespace std;
int check(string &s)
{
    string target = "abc";
    int count = 0;
    for (int i = 0; i < target.size(); i++)
    {
        if (s[i] != target[i])
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int result = check(s);

        if (result % 2 == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}