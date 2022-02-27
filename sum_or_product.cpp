#include<iostream>
using namespace std;

findSum( int n ) {
	int sum = 0;
	for ( int i = 1; i <= n; i++ ) {
		sum += i;
	}
	cout << sum;
}

findProduct( int n ) {
	int product = 1;
	for ( int i = 1; i <= n; i++ ) {
		product *= i;
	}
	cout << product;
}

int main() {
	int n, c;
	cin >> n >> c;
	
	switch ( c ) {
		case 1 :
			findSum(n);
			break;
		case 2 :
			findProduct(n);
			break;
		default :
			cout << "-1";
	}
	
}
