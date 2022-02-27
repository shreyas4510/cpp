#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	int i = 2;
	bool flag = false;
	while ( i < n ) {
		if ( n % i == 0 ) {
			cout << "Not Prime";
			flag = true;
			break;
		}
		i++;
	}
	
	if( !flag ) {
		cout << "Prime";
	}
}
