#include <iostream>
using namespace std;

int main() {
	int n, i = 0;
	cin >> n;
	
	while ( i < n ) {
		int j = 0;
		while ( j < n ) {
			if( j < (n - i - 1)){
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
