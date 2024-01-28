#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,m,A,B,res=0;
        cin>>n>>m;
        int a[n],b[m];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<m;i++)
        {
            cin>>b[i];
        }
        sort(a,a+n);
        sort(b,b+m);
        for(int i=0;i<n;i++)
        {
             A=abs(a[i]-b[m-i-1]);
             B=abs(a[i]-b[n-i-1]);
            res=res+max(A,B);
        }
        
        cout<<res<<endl;
    }
}