#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int>a(n);
        int count=1,ans=1;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        for(int i=1;i<n;i++)
        {
            if(a[i]-a[i-1]>k)
            {
                count=1;
            }
            else{
                count++;
            }
            ans=max(ans,count);
        }
        cout<<n-ans<<endl;
    }
}