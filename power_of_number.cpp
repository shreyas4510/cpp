#include <iostream>
using namespace std;

int main() {
	int n, x, i = 0, p = 1;
	cin >> x >> n;
	
	while ( i < n ) {
		p = p * x;
		i++;
	}
	cout << p;
	
}

