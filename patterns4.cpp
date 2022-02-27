#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	int i = 0, count = 1;
	while ( i < n ) {
		int j = 0;
		if( i > 0 ) {
			count = count - i + 1;	
		}
		while ( j <= n ) {
			if( j < (n - i) ) {
				cout << " ";
			}
			else {
				cout << count;
				count++; 	
			}
			j++;
		}
		cout << endl;
		i++;
	}
}
