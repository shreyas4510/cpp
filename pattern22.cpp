#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	for ( int i = 1; i <= n; i++ ) {
		int temp = 1;
		for ( int j = 1; j <= 2*n; j++ ) {
			if ( j > ( n - i + 1 ) && j < ( ( n + i ) )  ) {
				cout << "*";
				if( j > n )
					temp += 2;
			}
			else if( j <= n ) {
				cout << j;	
			}
			else {
				cout << j - temp;
				temp += 2;	
			}
		}
		cout << endl;
	}
	
}
