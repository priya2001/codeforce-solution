#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int n,ans=0;
       cin>>n;
       string s;
       cin>>s;
       for(int i=0;i<s.size();i++)
       {
           if(s[i]=='@')
           {
            ans++;
           }
           else if(s[i]=='*'&&s[i-1]=='*')
           {
            break;
           }
       }
       cout<<ans<<endl;
    }
}
