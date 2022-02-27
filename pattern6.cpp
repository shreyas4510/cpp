#include <iostream>
using namespace std;

int main() {
	int n, i = 0;
	cin >> n;
	while( i < n ) {
		int j = 0;
		while ( j < n ) {
			cout << "*";
			j++;
		}
		cout << endl;
		i++;
	}
}
