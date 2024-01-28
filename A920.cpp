#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      int x[4],y[4];
      for(int i=0;i<4;i++)
      {
        cin>>x[i]>>y[i];
      }
      int MIN=INT_MAX,MAX=INT_MIN;
      for(int i=0;i<4;i++)
      {
        MIN=min(MIN,x[i]);
        MAX=max(MAX,x[i]);
      }
      int D=MAX-MIN;
      cout<<D*D<<endl;
    }
}