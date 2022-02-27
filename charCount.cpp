#include <iostream>
using namespace std;

int main() {
	int charLength = 0, digitLength = 0, whiteSpacesLenght = 0;
	char c;
	c = cin.get();
	
	while ( c != '$' ) {
		c = cin.get();
		if( c == '\n' || c == ' ' ) {
			whiteSpacesLenght++;
		}
		else if (isdigit(c) == true) {
			digitLength++;		
		}
		else {
			charLength++;
		}
	}
	
	cout << charLength << " " << digitLength << " " << whiteSpacesLenght;
}
