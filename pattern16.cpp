#include <iostream>
using namespace std;

int main() {
	int n, i=0;
	cin >> n;
	
	while ( i < n ) {
		int j = 0;
		while ( j < n ) {
			if( j < i ) {
				cout << " ";
			}
			else {
				cout << "*";	
			}
			j++;
		}
		cout << endl;
		i++;
	}
	
	i = 0;
	while ( i < n ) {
		int j = 0;
		while ( j < n - i ) {
			cout << "*";
			j++;
		}
		cout << endl;
		i++;
	}
}
