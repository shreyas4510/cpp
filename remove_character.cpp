#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char str[100], input;
	cin >> str >> input;
	
	int count = 0, mark = 0;
	for ( int i=0; i<=strlen(str); i++ ) {
		if ( str[i] == input ) {
			count ++;
		}
		else {
			str[ i-count ] = str[i];
		}
	}
	
	cout << str;
}
