#include <iostream>
using namespace std;

int main() {
	int n, prev, a, decr = 0, incr = 0;
	bool state;
	
	cin >> n >> prev >> a;
	if( prev > a ) {
		state = true;
		decr = 1;
	}
	else {
		state = false;
		incr = 1;
	}
	prev = a;
		
	for ( int i = 2; i<n; i++ ) {
		cin >> a;
		if ( a < prev && !state ) {
			decr += 1;
			state = true;
		}
		else if ( a > prev && state ) {
			incr += 1;
			state = false;
		}
		else if ( a == prev ) {
			incr += 1;
			decr += 1;
		}
		prev = a;
	}
	
	if ( incr > 1 || decr > 1 ) {
		cout << "False";
	}
	else {
		cout << "True";
	}
}
