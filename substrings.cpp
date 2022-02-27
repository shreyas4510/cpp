#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char str[100];
	cin >> str;

	int count = 0;
	while ( count <= strlen(str)-1) {
		for ( int i=count; i<strlen(str); i++ ) {
			for ( int j=count; j<=i; j++ ) {
				cout << str[j];
			}
			cout << endl;
		}
		count ++;
	}
}
