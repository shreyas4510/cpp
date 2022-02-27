#include <iostream>
using namespace std;

int main() {
	int i = 0, n;
	cin >> n;
	
	char ch = 'A';
	while ( i < n ) {
		int j = 0;
		while ( j <= i ) {
			cout << ch;
			j++;
		}
		cout << endl;
		ch = ch + 1;
		i++;
	}
}
