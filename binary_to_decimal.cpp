#include <iostream>
using namespace std;

int main() {
	int n, temp = 1, sum = 0;
	cin >> n;
	
	while ( n > 0 ) {
		sum += (temp * ( n % 10 ));
		temp = 2 * temp;
		n = n / 10;
	}
	cout << sum;
}
