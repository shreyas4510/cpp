#include <iostream>
using namespace std;

int main() {
	int n, cur = 0, next = 1, prev = 0;
	cin >> n;
	
	for ( int i = 0; i < n; i++ ) {
		prev = cur;
		cur = next;
		next = prev + cur;
	}
	
	cout << cur;
}
