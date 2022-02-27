#include <iostream>
using namespace std;

int main() {
	int i, n;
	char ch = 'A';
	cin >> n;
	i = n;
	
	while ( i >= 0 ) {
		int j = n;
		char temp = ch + i;
		while ( j >= i ) {
			cout << temp;
			j--;
			temp = temp + 1;
		}
		cout << endl;
		i--;
	}
	
}
