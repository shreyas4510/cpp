#include <iostream>
using namespace std;

int main() {
	int n, i = 0;
	cin >> n;
	
	while ( i < n ) {
		int j = n;
		while ( j > i ) {
			cout << i + 1;
			j--; 
		}
		cout << endl;
		i++;
	}
	
	i = 0;
	while ( i < n ) {
		int j = n, temp = n - i;
		while ( j > i ) {
			cout << temp;
			j--; 
		}
		cout << endl;
		i++;
	}
}
