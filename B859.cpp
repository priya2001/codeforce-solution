#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int e=0,o=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]%2==0)
            {
               e=e+a[i];
            }
            else{
                o=o+a[i];
            }
        }
        if(e>o)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}