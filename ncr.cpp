#include <iostream>
using namespace std;

int factorial( int n ) {
	int fact = 1;
	for( int i = 1; i <= n; i++ ) {
		fact *= i;
	}
	return fact;
}

int main() {
	int n, r;
	cin >> n >> r;
	
	int fact_n = factorial( n ), fact_r = factorial( r ), fact_n_r = factorial( n - r );
	cout << fact_n / ( fact_r * fact_n_r );
	
}

//n! / r! * ( n-r )!
