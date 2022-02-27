#include <iostream>
using namespace std;

int main() {
	int n, i = 0;
	cin >> n;
	
	while ( i < n ) {
		int j = 0, k = 1; 
		while ( j < n ) {
			if( j < n - i - 1 ) {
				cout << " ";
			}
			else {
				cout << k;
				k++;
			}
			j++;
		}
		cout << endl;
		i++;
	}
}
