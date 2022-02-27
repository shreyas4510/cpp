#include <iostream>
using namespace std;

bool checkPalindrom(char name[], int len) {
	int i=0, j = len-1;
	while ( i < j ) {
		if(name[i] != name[j]) {
			return false;
		}
		i++;
		j--;
	}
	return true;
}

int main() {
	char name[1000];
	cin >> name;
	int len=0;
	for( int i=0; name[i] != '\0'; i++ ) {
		len++;
	}
	cout << ( checkPalindrom(name, len) ? "true" : "false" );
}
