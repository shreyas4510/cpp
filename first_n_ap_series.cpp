#include <iostream>
using namespace std;

int main() {
	int n, count = 1;
	cin >> n;
	
	for ( int i=1; i <= n; i++ ) {
		int temp = ((3 * count ) + 2);
		if( ( temp % 4) != 0 ) {
			cout << temp << " ";
		}
		else {
			i--;
		}
		count++;
	}
}
