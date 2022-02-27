#include <iostream>
using namespace std;

int main() {
	int n;
	bool prev = false;
	cin >> n;
	
	while ( n > 0 ) {
		if ( n % 10 != 0 ) {
			prev = true;
		}
		if ( prev ) {
			cout << n % 10;	
		}
		n /= 10;
	}
}
