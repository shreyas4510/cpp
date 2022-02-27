#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char str[100];
	cin >> str;
	int frequency[256] = {0};
	
	for( int i=0; i<strlen(str); i++ ) {
		frequency[ int( str[i] ) ] += 1;
	}
	
	int len = *( &frequency + 1 ) - frequency, max = INT_MIN, char_max = INT_MIN;
	for ( int i=0; i<len; i++ ) {
		if ( max < frequency[i] ) {
			max = frequency[i];
			char_max = i;
		}
	}
	cout << char(char_max);
}
