#include <iostream>
using namespace std;

int main () {
	int n, i = 0;
	cin >> n;
	
	while ( i < n ) {
		int j = 0, temp = i;
		while ( j < n + i ) {
			if ( j < n - i - 1 ) {
				cout << " ";
			}
			else {
				if ( j < n ) {
					temp++;
				}
				else {
					temp--;
				}
				cout << temp;
			}
			j++;
		}
		cout << endl;
		i++;
	}
}
