#include <iostream>
using namespace std;

int main() {
	int n, ans = 0, pv = 1;
	cin >> n;
	
	for ( ; n > 0; ) {
		ans = ans + ((n % 2) * pv);
		pv *= 10;
		n = n / 2;
	}
	cout << ans;
 }
