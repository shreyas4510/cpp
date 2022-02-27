#include <iostream>
#include <stdlib.h>
using namespace std;

int main () {
	int n, i=0, flag = false;
	cin >> n;
	int temp = (n / 2);
	
	while ( i < n ) {
		
		if ( i <= n/2 ) {
			temp++;
		}
		else {
			temp--;
		}
		
		int j = 0;
		while ( j < temp ) {
			if( j < abs((n / 2) - i)) {
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
}
