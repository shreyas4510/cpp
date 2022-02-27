#include <iostream>
using namespace std;

int main() {
	int n, sum_odd = 0, sum_even = 0;
	cin >> n;
	while ( n > 0 ) {
		int temp = 0;
		temp = ( n % 10 );
		if( temp % 2 == 0 ){
			sum_even = sum_even + temp;
		}
		else {
			sum_odd = sum_odd + temp;
		}
		n = n / 10;
	}
	cout << sum_even << " " << sum_odd;
}
