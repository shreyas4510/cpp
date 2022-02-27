#include <iostream>
using namespace std;

int main() {
	int n, i=1;
	cin >> n;
	
	while ( i <= n ) {
		int j = 1, p = i;
		while ( j <= i ) {
			cout << p;
			j++;
			p--;
		}
		cout << endl;
		i++;
	}
}
