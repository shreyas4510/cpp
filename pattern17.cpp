#include <iostream>
using namespace std;

int main() {
	int	i = 0, n;
	cin >> n;
	
	while ( i < n ) {
		int j = 0;
		while ( j < n - i ) {
			cout << i + 1;
			j++;
		}
		cout << endl;
		i++;
	}
	
	i = 0; 
	while ( i < n ) {
		int j = 0;
		while ( j < n - i ) {
			cout << n - i;
			j++;
		}
		cout << endl;
		i++;
	}
}
