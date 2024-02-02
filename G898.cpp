#include<bits/stdc++.h>
using namespace std;
int main() {
	int t ;
	cin>>t;
	while(t--) {
	    string s ;
		cin>>s;
		int sum = 0, cnt = 0, res = 1e9;
		for(int i = 0; i < s.size(); ++i)
			if(s[i] == 'A')cnt++, sum++;
			else res = min(res, cnt), cnt = 0;
		res = min(res, cnt);
		cout<<sum - res<<"\n";
	}
}