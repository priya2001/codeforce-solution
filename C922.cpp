#include <iostream> 
using namespace std; 
int main() { 
	int ts; cin >> ts;
	 while (ts--) { 
	 	int64_t a, b, c, ans = 0, tmp = (1ll << 62); 
	 	cin >> a >> b >> c; 
	 	if (a < b) swap(a, b);
	 	 while (tmp) {
	 	  tmp >>= 1;
	 	   if ((a & tmp) == (b & tmp)) { 
	 	   	if((a&tmp)) a-=tmp,b-=tmp;
	 	   } else {
	 	    if ((a > (tmp << 1)) && (a & tmp)) ans += tmp; 
	 	} 
	 	if (ans > c) { ans -= tmp; } 
	 } 
 cout << abs((a ^ ans) - (b ^ ans)) << endl; 
} return 0; 
}