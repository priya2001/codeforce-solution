#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int i=0,j=n-1;
        while(s[i]=='W')
        {
            i++;
        }
        while(s[j]=='W')
        {
            j--;
        }
        cout<<j-i+1<<endl;
    }
    
}