#include <iostream>
using namespace std;

int main() {
	int n, i = 1;
	cin >> n;
	
	while ( i <= n ) {
		int j = 1;
		while ( j <= n ) {
			cout << i;
			j++;
		}
		cout << endl;
		i++;
	}
	cout << endl;

	i = 1;
	while ( i <= n ) {
		int j = 1;
		while ( j <= n ) {
			cout << j;
			j++;
		}
		cout << endl;
		i++;
	}	
	cout << endl;
	
	i = 1;
	while( i <= n ) {
		int j = 0;
		while ( j < n ) {
			cout << n - j;
			j++;
		}
		cout << endl;
		i++;
	}
}
