#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	int i = 2, sum = 0;
	while ( i <= n ) {
		sum += i;
		i+=2;
	}
	
	cout << "Sum is : " << sum;
}
