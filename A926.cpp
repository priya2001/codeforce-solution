#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,p,sum=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        
        for(int i=1;i<n;i++)
        {
            p=a[i]-a[i-1];
            sum=sum+p;
        }
        cout<<sum<<endl;
    }
}