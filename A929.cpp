#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,sum=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i =0;i<n;i++)
        {
            if(a[i]<0)
            {
                a[i]=abs(a[i]);
            }
            sum=sum+a[i];
        }
        cout<<sum<<endl;
    }
}