#include <iostream>
#include <math.h>
using namespace std;

int findSquareRoot(int n) {
	return sqrt( n );
}

bool checFibonacci( int n ) {
	int cal1 = (5 * ( n * n ))+4, cal2 = (5 * ( n * n ))-4;
	int sqrt1 = findSquareRoot(cal1), sqrt2 = findSquareRoot(cal2);
	
	if ( ( sqrt1 * sqrt1 ) == cal1 || ( sqrt2 * sqrt2 ) == cal2 ) {
		return true;
	}
	else {
		return false;
	}
	
}

int main() {
	int n;
	cin >> n;
	cout << ( checFibonacci(n) ? "Yes" : "No");
}
