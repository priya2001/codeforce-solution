#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,f,a,b;
        cin>>n>>f>>a>>b;
        long long sum=0,p=0,x;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            sum=sum+min((x-p)*a,b);
            p=x;
        }
        if(sum<f)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}