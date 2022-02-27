#include <iostream>
using namespace std;

int main() {
	int n, cur = 0, prev = 0, next = 1;
	cin >> n;
	
	for ( int i=0; i < n; i++ ) {
		cout << cur << endl;
		prev = cur;
		cur = next;
		next = prev + cur;
	}
}
